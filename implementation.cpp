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
void Employee::setDept(string dept)
{
    department = dept;
    
}

// set position
void Employee::setPosit(string posit)
{
    position = posit;
    
}

// set ID
void Employee::setID(int id)
{
    idNumber = id;
    
}

// return name
string Employee::getName() const
{
    return name;
}

// return department
string Employee::getDept() const
{
    return department;
}

// return position
string Employee::getPosit() const
{
    return position;
}

// return ID
int  Employee::getID() const
{
    return idNumber;
}

// Display the info
void Employee::displayInfo() const
{
    
    cout << setw(12) << left << getName() << " ";
    cout << setw(6) << left << getID() << " ";
    cout << setw(15) << left << getDept() << " ";
    cout << setw(10) << left << getPosit() << endl;
    
}














