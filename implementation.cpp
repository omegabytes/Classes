//
//  implementation.cpp
//  
//
//  Created by Alex Gaesser on 11/8/14.
//
//

#include "Employee.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>

using namespace std;

// default constructor
Employee::Employee()
{
    name = "";
    department = "";
    position = "";
    idNumber = 0;
}

// set name
void Employee::setName(string empName)
{
    name = empName;
    
}

// set department
void Employee::setDept(string department)
{
    dept = department;
    
}

// set position
void Employee::setPosition(string position)
{
    posit = position;
    
}

// set ID
void Employee::setID(int id)
{
    idNumber = id;
    
}

// return name
void Employee::getName() const
{
    return name;
}

// return department
void Employee::getDept() const
{
    return dept;
}

// return position
void Employee::getPosit() const
{
    return posit;
}

// return ID
int  Employee::getID() const
{
    return idNumber;
}

// Display the info
void Employee::displayTable() const
{
    for(int i=0; i<NUMBER_OF_EMP; i++0)
    {
        cout << empl[i].getName() << " ";
        cout << empl[i].getID() << " ";
        cout << empl[i].getDept() << " ";
        cout << empl[i].getPosit() << endl;
    }
}














