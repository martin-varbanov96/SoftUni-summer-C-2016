#include "Person.h"
#include <stddef.h>
#include <iostream>
#include <string>

class Guest:public Person{
private:
    string course;
    double salary;
public:
    Guest(int = 0, string = "", string = "", double = 0);
    Guest(const Guest&);
    ~Guest();

    void print();

    string getCourse();
    int  getSalary();

    void getCourse(string);
    void getSalary(int);
};

