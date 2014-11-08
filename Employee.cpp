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

int main()
{
    
    // Create employee object
    Employee emp1, emp2, emp3;
    
    // set the values
    emp1.setName("Susan Meyer");
    emp1.setDept("Accounting");
    emp1.setPosit("Vice President");
    emp1.setID(47899);

    emp2.setName("Mark Jones");
    emp2.setDept("IT");
    emp2.setPosit("Programmer");
    emp2.setID(39119);
    
    emp3.setName("Joy Rogers");
    emp3.setDept("Manufacturing");
    emp3.setPosit("Engineer");
    emp3.setID(81774);
    
    // display the values
    emp1.displayInfo();
    emp2.displayInfo();
    emp3.displayInfo();
    
    cout << "\n\nEND";
    
    return 0;
    
}


