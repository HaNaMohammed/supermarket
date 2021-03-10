#include <iostream>
#ifndef ITEM_H
#define ITEM_H
#include <string.h>


using namespace std;

class Item
{
    public:
        Item();
        virtual ~Item();
        void setItemPrice(double);
        double getItemPrice();

        void setItemName(string);
        string getItemName();

        void setItemAmount(int);
        int getItemAmount();

        void setItemId(int);
        int getItemId();

        void setItemType(string);
        string getItemType();

        //enum ();


    protected:

    private:
        double itemPrice;
        string itemName;
        int itemId;
        int itemAmount;
        string itemType;
friend class Stock;
};

#endif // ITEM_H
