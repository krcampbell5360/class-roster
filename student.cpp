//
//  student.cpp
//  Version 2 - C867 Performance Assessment
//
//  Created by Kristina Campbell on 7/23/20.
//  Copyright © 2020 Kristina Campbell. All rights reserved.
//

#include "student.hpp"
#include <stdio.h>
#include <iostream>
#include <sstream>
//#include "degree.h"
using namespace std;

//default constructor
Student::Student() {
    this->studentID = "";
    this->firstName = "";
    this->lastName = "";
    this->emailAddress = "";
    this->studentAge = 0;
    for (int i = 0; i < numDaysSize; i++) this -> daysInCourse[i] = 0;
    return;
}

//Part D.2.c constructor using all input parameters in table
Student::Student(string studentID, string firstName, string lastName, string emailAddress, int studentAge, int daysInCourse[]) {
    this->studentID = studentID;
    this->firstName = firstName;
    this->lastName = lastName;
    this->emailAddress = emailAddress;
    this->studentAge = studentAge;
    for (int i = 0; i < numDaysSize; i++) this-> daysInCourse[i] = daysInCourse[i];
    return;
}//second constructor

//accessors

string Student::getStudentID() {
    return studentID;
}

string Student::getFirstName() {
    return firstName;
}

string Student::getLastName() {
    return lastName;
}

string Student::getEmailAddress() {
    return emailAddress;
}


int Student::getStudentAge() {
    return studentAge;
}

int * Student::getDaysInCourse() {
    return daysInCourse;
}

//mutators
void Student::setStudentID(string studentID) {
    this->studentID = studentID;
}

void Student::setFirstName(string firstName) {
    this->firstName = firstName;
}

void Student::setLastName(string lastName) {
    this->lastName = lastName;
}

void Student::setEmailAddress(string emailAddress) {
    this->emailAddress = emailAddress;
}

void Student::setStudentAge(int studentAge) {
    this->studentAge = studentAge;
}

void Student::setDaysInCourse(int daysInCourse[]) {
    for (int i = 0; i < numDaysSize; i++)
        this->daysInCourse[i] = daysInCourse[i];
}

void Student::print() {}

//DESTRUCTOR

Student::~Student() {}
