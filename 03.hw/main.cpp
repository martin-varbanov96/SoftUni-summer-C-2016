#include "Person.h"
#include "Student.h"
#include "teacher.h"
#include <stddef.h>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    Student a;
    a.print();
    Student b(a);
    b.print();

    Teacher d(0, "Pesho", "himia", 200, 5);
    d.print();

    return 0;
}
