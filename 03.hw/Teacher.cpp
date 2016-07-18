#include "Person.h"
#include "teacher.h"
#include <stddef.h>
#include <iostream>
#include <string>
using namespace std;

Teacher::Teacher(int tmpId, string tmpName, string tmpCourse, float tmpSalary, int tmpDays)
    :Person(tmpId, tmpName){
        course = tmpCourse;
        salary = tmpSalary;
        days = tmpDays;
}
Teacher::~Teacher(){}

Teacher::Teacher(const Teacher& tmp)
    :Person(tmp){
        course = tmp.course;
        salary = tmp.salary;
        days = tmp.days;
    }

string Teacher::getCourse(){
    return this->course;
}
float Teacher::getSalary(){
    return this->salary;
}
int Teacher::getDays(){
    return this->days;
}

void Teacher::setCourse(string tmp){
    this->course = tmp;
}
void Teacher::setSalary(float tmp){
    this->salary = tmp;
}
void Teacher::setDays(int tmp){
    this->days = tmp;
}

void Teacher::print(){
    cout << "id = " <<  this->getId() << " Name = " << this->getName() << " Course = " << this->course
    << " Salary " << this->salary << " days " << this->days << endl;
}
