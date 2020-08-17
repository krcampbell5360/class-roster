//
//  student.hpp
//  Version 2 - C867 Performance Assessment
//
//  Created by Kristina Campbell on 7/23/20.
//  Copyright © 2020 Kristina Campbell. All rights reserved.
//

#ifndef student_hpp
#define student_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include "degree.h"
#pragma once
using namespace std;

#endif /* student_hpp */

class Student { //Part D2
    public:
    
        //Part D2.d - constructors
        Student();
        Student(string studentID, string firstName, string lastName, string emailAddress, int studentAge, int daysInCourse[]);
    
        const static int numDaysSize = 3;
    
        //Part D2.b - mutators
        void setStudentID(string studentID);
        void setFirstName(string firstName);
        void setLastName(string lastName);
        void setEmailAddress(string emailAddress);
        void setStudentAge(int studentAge);
        void setDaysInCourse(int daysInCourse[]);
    
        //Part D2.a - accessors
        string getStudentID();
        string getFirstName();
        string getLastName();
        string getEmailAddress();
        int getStudentAge();
        int* getDaysInCourse();
        virtual DegreeProgram getDegreeProgram() = 0;
    
        virtual void print() = 0;
    
        //Destructor
        virtual ~Student();
    
    //Part D1
    protected:
        string studentID;
        string firstName;
        string lastName;
        string emailAddress;
        int studentAge;
        int daysInCourse[numDaysSize];
    


};

