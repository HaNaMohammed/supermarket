#ifndef CUSTOMER_H
#define CUSTOMER_H
#include "Person.h"

class Customer:public Person
{
    public:
double Recipte=0;

        Customer();
        double Buyitems();
        double GetTotal();
        double GetRevenue();
       // void Maxtotalrevenue();

       // Stock obj;
        int productchoice;



    private:
};

#endif // CUSTOMER_H
