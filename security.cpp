//
//  security.cpp
//  Version 2 - C867 Performance Assessment
//
//  Created by Kristina Campbell on 7/23/20.
//  Copyright © 2020 Kristina Campbell. All rights reserved.
//

#include "security.hpp"
#include <iostream>
#include <sstream>
using namespace std;

Security::Security(): Student() {}

Security::Security(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse[], DegreeProgram degreeProgram) : Student(studentID, firstName, lastName, emailAddress, age, daysInCourse) {
    degreeProgram = SECURITY;
}

DegreeProgram Security::getDegreeProgram() {
    return SECURITY;
}

//Part E.3.c
void Security::print() {
    
    cout << getStudentID() << "\t" << "First Name: " << getFirstName();
    cout << "\t" << "Last Name: " << getLastName();
    cout << "\t" << "Age: " << getStudentAge();
    cout << "\t" << "Days in Course: " << getDaysInCourse()[0] << ", " << getDaysInCourse()[1] << ", " << getDaysInCourse()[2];
    cout << "\t" << "Degree Program: Security" << endl;
    
}

Security::~Security() {
}
