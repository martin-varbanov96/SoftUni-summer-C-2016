#include "Person.h"
#include "Guests.h"
#include <stddef.h>
#include <iostream>
#include <string>

Guest::Guest(int tmpId, string tmpNae, string tmpCourse, double tmpSal)
    :Person(tmpId){
        course = tmpCourse;
        salary = tmpSal;
    }

Guest::~Guest(){}

void Guest::print(){
    cout << "id = " <<  this->getId() << " Name = " << this->getName() << " Course = " << this->course
    << " Salary " << this->salary << endl;
}
