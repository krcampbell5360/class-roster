//
//  software.hpp
//  Version 2 - C867 Performance Assessment
//
//  Created by Kristina Campbell on 7/28/20.
//  Copyright © 2020 Kristina Campbell. All rights reserved.
//

#ifndef software_hpp
#define software_hpp

#include <stdio.h>
#include <iostream>
#include "degree.h"
#include "student.hpp"
#pragma once
using namespace std;

#endif /* software_hpp */

//creating separate class files for each student program type to more clearly differentiate each student type's program information
class Software : public virtual Student {
public:
    Software();
    Software(string studentID, string firstName, string lastName, string emailAddress, int studentAge, int daysInCourse[], DegreeProgram degreeProgram);

//virtual method from student class
DegreeProgram getDegreeProgram();
void print();

~Software();
    
};
