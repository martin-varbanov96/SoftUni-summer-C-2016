#include "Person.h"
#include "Student.h"
#include <stddef.h>
#include <iostream>
#include <string>

Student::Student(int tmpId, string tmpName, string tmpCourse, int tmpPoints, double tmpAvg)
    :Person(tmpId, tmpName){
        course = tmpCourse;
        points = tmpPoints;
        avg = tmpAvg;
    }
Student::~Student(){}

Student::Student(const Student& tmp)
    :Person(tmp){
        course = tmp.course;
        points = tmp.points;
        avg = tmp.avg;
}

string Student::getCourse(){
    return this->course;
}
int Student::getPoints(){
    return this->points;
}
double Student::getAvg(){
    return this->avg;
}

void Student::setCourse(string tmp){
    this->course = tmp;
}
void Student::setPoints(int tmp){
    this->points = tmp;
}
void Student::setAvg(double tmp){
    this->avg = tmp;
}
void Student::print(){
    cout << "ID = " << this->getId() << " name = " << this->getName()
    << " Course " << this->course << " points " << this->points << " Avg = " << this->avg <<endl;
}
