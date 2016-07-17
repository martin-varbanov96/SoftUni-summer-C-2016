#include "Person.h"
#include <iostream>
using namespace std;

Person::Person(int tmpId, string tmpName){
    this->id = tmpId;
    this->name = tmpName;
}

Person::Person(const Person& tmp){
    this->id = tmp.getId();
    this->name = tmp.getName();
}

Person& Person::operator = (const Person& tmp){
    this->id = tmp.getId();
    this->name = tmp.getName();
}


Person::~Person(){}

void Person::print(){
    cout << "ID = " << this->id << " name = " << this->name << endl;
}
int Person::getId(){
    return this->id;
}
string Person::getName(){
    return this->name;
}
void  Person::setId(int tmp){
    this->id = tmp;
}
void Person::setName(string tmp){
    this->name = tmp;
}
