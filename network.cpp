//
//  network.cpp
//  Version 2 - C867 Performance Assessment
//
//  Created by Kristina Campbell on 7/28/20.
//  Copyright © 2020 Kristina Campbell. All rights reserved.
//

#include "network.hpp"
//#include "student.hpp"
//#include "degree.h"
#include <iostream>
using namespace std;

//calling constructor from Student class because it already sets default fields for the student data information (i.e. studentID, first name, etc.)
Network::Network():Student() {}

Network::Network(string studentID, string firstName, string lastName, string emailAddress, int studentAge, int daysInCourse[], DegreeProgram degreeProgram):Student(studentID, firstName, lastName, emailAddress, studentAge, daysInCourse) {
    degreeProgram = NETWORK;
}

DegreeProgram Network::getDegreeProgram() {
    return NETWORK;
}

//Part E.3.c
void Network::print() {
    
    cout << getStudentID() << "\t" << "First Name: " << getFirstName();
    cout << "\t" << "Last Name: " << getLastName();
    cout << "\t" << "Age: " << getStudentAge();
    cout << "\t" << "Days in Course: " << getDaysInCourse()[0] << ", " << getDaysInCourse()[1] << ", " << getDaysInCourse()[2];
    cout << "\t" << "Degree Program: Network" << endl;
    
}

Network::~Network() {
}
