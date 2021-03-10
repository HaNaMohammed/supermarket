#include <iostream>
#include <string>
#include "Item.h"
#include "Stock.h"
#include "admin.h"

#include "Customer.h"
#include "bits/c++config.h"
#include "time.h"
#include <windows.h>
#include <cstdlib>
#include <ctime>

using namespace std;

string get_time()
{

    // current date/time based on current system
   time_t now = time(0);

   // convert now to string form
   char* dt = ctime(&now);

return dt;

}
void print_red(string s)
{
    HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);
 cout<<s<<endl;
SetConsoleTextAttribute(h,FOREGROUND_INTENSITY|FOREGROUND_INTENSITY);

}

int main()
{
   // int x;
cout <<"Hello"<<endl;
    string s=get_time();
    print_red(s);
    cout<<s<<endl;
    Time Arrival, duration,checkout;
    Arrival.get_ArrivalTime();
    duration.get_Duration();
    checkout= Arrival+duration;
    cout<<"checkout "<<checkout<<endl;

while (true)
{ int choice,adminorcustomer;

    Stock ob;
    Customer ob2;
    Admin ob3;

    cout<<endl<<"Press 1 to Enter as Admin , 2 to Enter as Customer and 0 to end the program:"<<endl;
    cout<<"What do you want to do: "<<endl;
    cin>>adminorcustomer;
    if (adminorcustomer==1){

    cout<<"1-Report Available Items"<<endl<<"2- Add New Item"<<endl<<"3- Update Existing Item"<<endl<<"4- Report Total Revenue"<<endl<<"5- Display Total Customers"<<endl<<"6- Display total "<<endl;
    cin>>choice;
    switch (choice)

    {
    case 1:
        ob.printitems();

       // cin>>x;

        break;

    case 2:
        ob.additems();
        break;

    case 3:
        ob.updateitems();
        break;
    case 4:
        ob3.GetRevenue();
        break;

    case 6:
        ob2.GetTotal();
break;


    }}
    else if (adminorcustomer==0){
        exit(1);
    }
   else if (adminorcustomer==2){
        int numberOfCustomer;
        cout<<"please enter number of customer "<<endl;
        cin>>numberOfCustomer;
        cout<<"Dear customer please select what do you want to do: "<<endl<<"Choose 1 For buying items"<<endl<<"Choose 2 For returning total receipt."<<endl;
            cin>>choice;
        Customer NumberOfCustomer[numberOfCustomer];
        for(int i=0; i< numberOfCustomer; i++)
        {

        switch (choice){
        case 1:
            double d;
            ob2.Buyitems();
//            d=NumberOfCustomer.Buyitems();
            break;

        case 2:
            ob2.GetTotal();
            break;
        }
           /* NumberOfCustomer[i].Buyitems();
            NumberOfCustomer[i].GetTotal();*/

        }

    }


    }
    return 0;

}
