//
//  network.hpp
//  Version 2 - C867 Performance Assessment
//
//  Created by Kristina Campbell on 7/28/20.
//  Copyright © 2020 Kristina Campbell. All rights reserved.
//

#ifndef network_hpp
#define network_hpp

#include <stdio.h>
#include <iostream>
#include <sstream>
#include "degree.h"
#include "student.hpp"
#pragma once
using namespace std;

#endif /* network_hpp */

//creating separate class files for each student program type to more clearly differentiate each student type's program information

class Network : public virtual Student {
public:
    Network();
    Network(string givenID, string fName, string lName, string eMail, int studAge, int nDays[], DegreeProgram degreeProgram);

//virtual method from student class
DegreeProgram getDegreeProgram();
void print();

~Network();
    
};


