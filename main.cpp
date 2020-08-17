//
//  main.cpp
//  Version 2 - C867 Performance Assessment
//
//  Created by Kristina Campbell on 7/23/20.
//  Copyright © 2020 Kristina Campbell. All rights reserved.
//

#include <iostream>
#include <sstream>
#include <vector>
#include "roster.hpp"
using namespace std;

int main() {
    int numStudents = 5;
    const string studentData[5] =
    {
        "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
        "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
        "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
        "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
        "A5,Kristina,Campbell,kcam277@wgu.edu,34,34,30,45,SOFTWARE"
        //Part A | last line addition is personal info
    };
    
    
    //creating the degree instance for use later in main
   DegreeProgram degreeP;
    
    //adding students to roster
    Roster classRoster;
    
    for (int i = 0; i < numStudents; i++) {
        
        //initializing degreeP
        degreeP = SECURITY;
        
        //using string stream and substring to help me parse out the student data strings
        stringstream ss(studentData[i]);
        vector<string> inputStrings;
        
        while(ss.good()) {
            string substr;
            getline(ss, substr, ',');
            inputStrings.push_back(substr);
        }
        if (inputStrings[8] == "SECURITY"){
            degreeP = DegreeProgram::SECURITY;
        }
        if(inputStrings[8] == "NETWORK") {
            degreeP = DegreeProgram::NETWORK;
        }
        if(inputStrings[8] == "SOFTWARE") {
            degreeP = DegreeProgram::SOFTWARE;
        }
        
        classRoster.add(inputStrings[0], inputStrings[1], inputStrings[2], inputStrings[3], stoi(inputStrings[4]), stoi(inputStrings[5]), stoi(inputStrings[6]), stoi(inputStrings[7]), degreeP);
    }
    
    //Part F.1 | Printing personal information for C867 course
    cout << "Course: C867 Scripting and Programming - Applications" << endl;
    cout << "Programming language used: C++" << endl;
    cout << "Student ID: 001287800" << endl;
    cout << "Student Name: Kristina Campbell" << endl;
    cout << endl;
    
    cout << "Average days in course for each student: " << endl;
    
    //for loop to iterate through student data by ID and calculate average days in the course
    for (int i = 0; i < numStudents; i++) {
        classRoster.printAverageDaysInCourse(classRoster.getStudentAt(i)->getStudentID());
    }
    
    //for loop to identify and print student data sorted by degree program
    for (int i = 0; i < 3; i++) classRoster.printByDegreeProgram((DegreeProgram) i);
    
    //Part F.4
    cout << "Printing entire class roster:" << endl;
    classRoster.printAll(); //print all student info in roster
    
    classRoster.printAverageDaysInCourse("A1");//printing the average days in a course for student ID A1
    
    classRoster.printInvalidEmails(); //finding and printing the email addresses that don't conform to email standards.
    
    classRoster.printByDegreeProgram(SOFTWARE);//printing just the students in the Software degree program
    
    classRoster.remove("A3");//removing student A3 from the roster
    
    //did not include a second classRoster.printAll() because I have included a print in the remove function in the Roster.cpp file
    
    classRoster.remove("A3");//this will generate a message saying student A3 was not found
    
}
