//
//  Student.h
//  Algorithm
//
//  Created by worthy on 2018/3/10.
//  Copyright © 2018年 worthy. All rights reserved.
//

#ifndef Student_h
#define Student_h

#include <iostream>
#include <string>
using namespace std;

struct Student{
    string name;
    int score;
    
    bool operator<(const Student &otherStudent){
        return score < otherStudent.score;
    }
    
    friend ostream& operator<<(ostream &os, const Student &student){
        os<<"Student: "<<student.name<<" "<<student.score<<endl;
        return os;
    }
};


#endif /* Student_h */
