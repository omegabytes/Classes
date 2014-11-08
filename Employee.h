//
//  Employee.h
//  
//
//  Created by Alex Gaesser on 11/8/14.
//
//

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

using namespace std;

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
    
    string getName() const;       // returns the name
    string getDept() const;       // retutns the department
    string getPosit() const;      // returns the position
    int  getID() const;         // returns the emplyee ID
    
    void displayInfo() const;  // displays the employee info
    
};

#endif
