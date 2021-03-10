#include "Person.h"

Person::Person()
{
    //ctor
}

Person::person(string n,string a )
{

    personName =n;
    personAddress=a;

}
void Person::setName(string n)
{
    personName =n;
}

string Person::getName()
{
    return personName;
}

void Person::setAddress(string a)
{
    personAddress=a;
}

string Person::getAddresss()
{
    return personAddress;
}
