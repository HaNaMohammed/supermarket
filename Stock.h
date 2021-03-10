#include <iostream>
#ifndef STOCK_H
#define STOCK_H
#include <fstream>
#include "Item.h"
#include <iomanip>
using namespace std;

 static int sizee=10;
class Stock
{

private:
    Item objectofitem;
    public:
        string item,type ;
        int amount;
        int id ;
        int price;


        Stock();
        void printitems();
        Item *arritems=new Item [sizee];
        Item newarritems[6];
        void additems();
        void updateitems();




};

#endif // STOCK_H
