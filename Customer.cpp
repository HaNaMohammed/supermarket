#include "Customer.h"
#include "Stock.h"
#include <string.h>
#include <fstream>
#include "Item.h"
Stock obj;
static int counter;
double totalprice=0;
int choiceofamount;
Customer ob;
static int Address=0;
static double totalRevenue=0;

//double Maximumtotalrevenue =0;
double Customer:: Buyitems(){

    cout<<"Here are the products in the stock sir: "<<endl;
    obj.printitems();
    cout<<"Which product do you want to buy?"<<endl;
    cin>>productchoice;
    cout<<"Here is your product "<<obj.arritems[productchoice-1].getItemName()<<endl;
    cout<<"Please enter the amount you want sir: "<<endl ;
    cin>>choiceofamount;
    counter=obj.arritems[productchoice-1].getItemAmount();
    counter-=choiceofamount;                                //counter after buying
    obj.arritems[productchoice-1].setItemAmount(counter);
    cout<<"The amount of item: "<<obj.arritems[productchoice-1].getItemName()<<" Has become :"<<counter<<endl;

    totalprice=totalprice + (obj.arritems[productchoice-1].getItemPrice()*choiceofamount);
     ofstream  myfile("u.txt", ios::trunc);
       if(myfile)
       {
               for(int i=0; i<sizee ;i++)
               {
                   int id , amount;
                   double price;
                   string item, type;

                   id=i+1;
                   item=obj.arritems[i].getItemName();
                   type=obj.arritems[i].getItemType();
                   price=obj.arritems[i].getItemPrice();
                   amount=obj.arritems[i].getItemAmount();
                myfile<<"\n"<<id<<"\t"<<item<<"\t"<<type<<"\t"<<price<<"\t"<<amount;


               }

       }
    double tempp =totalprice;
    totalRevenue=(totalRevenue+totalprice);
      cout <<"total price = "<<totalprice;
    totalprice=0;



return tempp;
}



double Customer :: GetTotal()
{

return totalprice;

cout<<"The total price of the items you bought = "<<totalprice<<endl;


}
double Customer :: GetRevenue()
{
    return totalRevenue;
    cout<<"total revenue = "<< totalRevenue<<endl;
}


Customer::Customer()
{

    Address=Address+1;
    ob.personAddress=personAddress;
}
/* void Customer:: Maxtotalrevenue()
{
//if (Maximumtotalrevenue<totalprice){
    Maximumtotalrevenue=Maximumtotalrevenue+totalprice;

    cout <<Maximumtotalrevenue<<endl;

}*/

