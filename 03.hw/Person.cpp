#include "Person.h"
#include <iostream>
#include <stddef.h>

using namespace std;

Person::Person(int tmpId, string tmpName){
    this->id = tmpId;
    this->name = tmpName;
}

Person::Person(const Person& tmp){
    id = tmp.id;
    name = tmp.name;
}

Person& Person::operator = (const Person& tmp){
    id = tmp.id;
    name = tmp.name;
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
