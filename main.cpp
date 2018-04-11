//
//  main.cpp
//  Algorithm
//
//  Created by worthy on 2018/2/26.
//  Copyright © 2018年 worthy. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include "SortTestHelper.h"
#include "Student.h"

using namespace std;

template <typename T>
void selectionSort(T arr[], int n) {
    for (int i = 0; i < n; i++){
        int minIndex = i;
        for (int j = i+1; j < n; j++){
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[i], arr[minIndex]);
    }
}

template <typename T>
void insertSort(T arr[], int n){
    for (int i = 1; i < n; i++){
        T temp = arr[i];
        int j;
        for (j = i; j > 0 && arr[j-1] > temp; j--){
            arr[j] = arr[j-1];
        }
        arr[j] = temp;
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int n = 100000;
    int *arr = SortTestHelper::generateNearlyOrderedArray(n, 100000);
    int *arr2 = SortTestHelper::copyIntArray(arr, n);
    SortTestHelper::testSort("Selection", selectionSort, arr, n);
    SortTestHelper::testSort("Insertion", insertSort, arr2, n);
    delete[] arr;
    return 0;
}
