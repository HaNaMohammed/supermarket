#include "Item.h"
#include "Stock.h"
#include <string.h>

Item::Item()
{
    //ctor
}

Item::~Item()
{
    //dtor
}
void Item::setItemPrice(double p)
{
    itemPrice=p;

}
double Item::getItemPrice()
{
    return itemPrice;
}

void Item::setItemName(string n)
{
    itemName=n;
}
string Item::getItemName()
{
    return itemName;
}

void Item:: setItemAmount(int a)
{
    itemAmount=a;
}
int Item::getItemAmount()
{
    return itemAmount;
}

void Item::setItemId(int i)
{
    itemId=i;
}
int Item::getItemId()
{
    return itemId;
}

void Item:: setItemType(string t)
{
    itemType=t;

}
string Item::getItemType()
{
    return itemType;
}

//enum(){Washing,Takeaway,Meat,Drink};
