#ifndef TEACHER_H
#define TEACHER_H
#include "Person.h"
#include <stddef.h>
#include <iostream>
#include <string>

class Teacher:public Person{
private:
    string course;
    float salary;
    int days;
public:
    Teacher(int = 0, string = "", string = "", float = 0, int = 0);
    Teacher(const Teacher&);
    ~Teacher();
    Teacher& operator = (const Teacher&);

    string getCourse();
    float getSalary();
    int getDays();

    void setCourse(string);
    void setSalary(float);
    void setDays(int);

    void print();
};
#endif // TEACHER_H
