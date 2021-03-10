#ifndef PERSON_H
#define PERSON_H
#include<string>
#include <iostream>
using namespace std;
class Person
{
    public:
        Person();
        person(string n,string a );
        void setName(string n);
        string getName();
        void setAddress(string a);
        string getAddresss();


    protected:
        string personName;
        string personAddress;

};

#endif // PERSON_H
