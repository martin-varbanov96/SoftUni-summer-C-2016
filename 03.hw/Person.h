#ifndef PERSON_H
#define PERSON_H
#include <string>
#include <stddef.h>

using namespace std;

class Person{
public:
    Person(int = 0, string = "");
    Person(const Person&);
    Person& operator = (const Person&);
    ~Person();

    int getId();
    string getName();

    void setId(int);
    void setName(string);

    virtual void print();
private:
    int id;
    string name;
};

#endif // PERSON_H
