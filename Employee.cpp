//
//  Employee.cpp
//  
//
//  Created by Alex Gaesser on 11/8/14.
//
//

/*
 This program creates a class Employee, which stores employee's name, ID number, department, and position.
 
 Input: Name, ID number, Department, Position.
 
 Processing: 1. Prompt the user for name, ID, department, and position.
             2. Assign the values.
             3. Display the values.
 
 Output: Displays the input data for each employee in a table.
*/

#include "Employee.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>

using namespace std;

void main()
{
    const int NUMBER_OF_EMP = 3;
    
    // Create employee object
    Employee empl[NUMBER_OF_EMP] = {
        Employee("Susan Meyers","Accounting","Vice President",47899),
        Employee("Mark Jones","IT","Programmer",39119),
        Employee("Joy Rogers","Manufacturing","Engineer",81774)
    };
    
    // display the values
    empl.displayTable();
    
    cout << "\n\n";
    system("pause");
    
}



/*
 // Create Employee object
 Employee empObject;
 string name, dept, pos;
 int idNum;
 
 // set name
 cout << "\nEnter the employee's name: ";
 cin >> name;
 empObject.setName(name);
 
 // set department
 cout << "\nEnter the department the employee works in: ";
 cin >> dept;
 empObject.setDept(dept);
 
 // set position
 cout << "\nEnter the employee's postion: ";
 cin >> pos;
 empObject.setPosit(pos);
 
 // set employee ID
 cout << "\nEnter the employee's ID number: ";
 cin >> idNum;
 empObject.setID(idNum);
 
 
*/