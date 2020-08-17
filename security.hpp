//
//  security.hpp
//  Version 2 - C867 Performance Assessment
//
//  Created by Kristina Campbell on 7/23/20.
//  Copyright © 2020 Kristina Campbell. All rights reserved.
//

#ifndef security_hpp
#define security_hpp

#include <stdio.h>
#include <iostream>
#include "degree.h"
#include "student.hpp"
#pragma once
using namespace std;

#endif /* security_hpp */

//creating separate class files for each student program type to more clearly differentiate each student type's program information and to use for printing by degree type

class Security : public virtual Student {
public:
    Security();
    Security(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse[], DegreeProgram degreeProgram);

//virtual method from student class
DegreeProgram getDegreeProgram();
void print();

~Security();
    
};

