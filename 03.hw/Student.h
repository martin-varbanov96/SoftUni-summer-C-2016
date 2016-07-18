#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"
#include <string>
using namespace std;

class Student:public Person{
private:
    string course;
    int points;
    double avg;
public:
    Student(int = 0, string = "", string = "", int = 0, double = 0 );
    Student(const Student&);
    ~Student();
    Student& operator = (const Student&);

    string getCourse();
    int getPoints();
    double getAvg();

    void setCourse(string);
    void setPoints(int);
    void setAvg(double);

    void print();

};
#endif // STUDENT_H
