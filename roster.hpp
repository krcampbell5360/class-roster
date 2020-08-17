//
//  roster.hpp
//  Version 2 - C867 Performance Assessment
//
//  Created by Kristina Campbell on 7/23/20.
//  Copyright © 2020 Kristina Campbell. All rights reserved.
//

#ifndef roster_hpp
#define roster_hpp
#pragma once
#include <stdio.h>
#include <iostream>
#include "degree.h"
#include "student.hpp"
#include "security.hpp"
#include "network.hpp"
#include "software.hpp"
using namespace std;

#endif /* roster_hpp */

//Part E
class Roster {
private:
    int lastIndex = 0;
    int capacity = 8;
    
public:
    
    Roster();
    
    Student* getStudentAt(int index);

    //Part E.3.a
    void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram);
    //Part E.3.b
    void remove(string studentID);
    //Part E.3.c
    void printAll();
    //Part E.3.d
    void printAverageDaysInCourse(string studentID);
    //Part E.3.e
    void printInvalidEmails();
    //Part E.3.f
    void printByDegreeProgram(DegreeProgram degreeProgram);
    
    //Part E.1
    Student *classRosterArray[5];
    
    //destructor
    ~Roster();
};
