//
//  roster.cpp
//  Version 2 - C867 Performance Assessment
//
//  Created by Kristina Campbell on 7/23/20.
//  Copyright © 2020 Kristina Campbell. All rights reserved.
//

#include "roster.hpp"
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

Roster::Roster() {
    return;
}

//Part E.1
Student * Roster::getStudentAt(int index) {
    return classRosterArray[index];
}

//updates roster and also sets instance variables
void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram) {
    
    int courseDays [Student::numDaysSize];
    courseDays[0] = daysInCourse1;
    courseDays[1] = daysInCourse2;
    courseDays[2] = daysInCourse3;
    if(degreeProgram == DegreeProgram::SECURITY){ classRosterArray[lastIndex++] = new Security(studentID, firstName, lastName, emailAddress, age, courseDays, degreeProgram);}
    else if(degreeProgram == DegreeProgram::NETWORK) { classRosterArray[lastIndex++] = new Network(studentID, firstName, lastName, emailAddress, age, courseDays, degreeProgram);}
    else if(degreeProgram == DegreeProgram::SOFTWARE) {classRosterArray[lastIndex++] = new Software(studentID, firstName, lastName, emailAddress, age, courseDays, degreeProgram);}
    return;
    }

//prints all student info from the student data table
void Roster::printAll() {
    for (int i = 0; i < 5; i++) {
        (classRosterArray)[i]->print();
    }
    cout << endl;
}

//removes a student by their ID; also prints the roster so one can see where the ID info is missing in the data
void Roster::remove(string studentID) {
   bool studentMissing = false;
    for (int i = 0; i < 5; i++) {
        if(classRosterArray[i]){
            classRosterArray[i]->print();}
        if(classRosterArray[i] != NULL) {
            if(studentID == classRosterArray[i]->getStudentID()) {
                classRosterArray[i] = nullptr;
                studentMissing = true;
                cout << "Removing student ID: " << studentID << endl;
            }
        }
         if (classRosterArray[i] == NULL) {
            cout << "Student ID : " << studentID << " not found." << endl;
        }
    }
}

//calculates and prints the average days in a course, identifying the student by their ID
void Roster::printAverageDaysInCourse(string studentID) {
    
    for(int i = 0; i < 5; i++) {
        if (this->classRosterArray[i]->getStudentID() == studentID) {
            int averageDays = 0;
            averageDays = (((this->classRosterArray[i]->getDaysInCourse()[0]) + (this->classRosterArray[i]->getDaysInCourse()[1]) + (this->classRosterArray[i]->getDaysInCourse()[2])) / 3);
            cout << "Average course days for student ID " << studentID << " are " << averageDays << endl;
        }
    }
}

//checks to verify the email addresses in the data table are valid or invalid then prints the invalid email addresses
void Roster::printInvalidEmails() {
    cout << "These are invalid email addresses:" << endl;
    for (int i = 0; i < 5; i++) {
        bool foundAt = false;
        bool foundPeriod = false;
        bool foundSpace = false;
        string emailAddress = "";
        emailAddress = this->classRosterArray[i]->getEmailAddress();
        for (char &x : emailAddress) {
            if (x == '@') {
                foundAt = true;
            }
            if (x == '.') {
                foundPeriod = true;
            }
            if (x == ' ') {
                foundSpace = true;
            }
        }
        if(foundAt == false || foundPeriod == false || foundSpace == true) {
            cout << (*classRosterArray[i]).getEmailAddress() << endl;
        }
    }
    cout << endl;
}

//prints students by their degree program
void Roster::printByDegreeProgram(DegreeProgram degreeProgram) {
    cout << "Printing students in degree program: " << degreeProgramStrings[degreeProgram] << endl;

    for (int i = 0; i < 5; i++) {
        if (this->classRosterArray[i]->getDegreeProgram() == degreeProgram) this-> classRosterArray[i]->print();
    }
    cout << endl;
}

//destructor
Roster::~Roster() {
    }
