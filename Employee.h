//
//  Employee.h
//  
//
//  Created by Alex Gaesser on 11/8/14.
//
//

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <stdio.h>
#include <string>

class Employee
{
private:
    int idNumber;
    string name, department, position;
    
public:
    Employee();                 // default constructor
    void setName(string);       // set the name
    void setDept(string);       // set the department
    void setPosit(string);      // set the position
    void setID(int);            // set the employee ID
    
    void getName() const;       // returns the name
    void getDept() const;       // retutns the department
    void getPosit() const;      // returns the position
    int  getID() const;         // returns the emplyee ID
    
    void displayTable() const;  // displays the employee info
    
};

#endif
