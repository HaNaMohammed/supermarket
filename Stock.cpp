#include "Stock.h"
#include <string.h>
#include <fstream>
#include "Item.h"
static int temp=0;
 fstream myfile;
Stock ::Stock()
{


}
 void Stock :: printitems (){
   /* string item,type ;
        int amount;
        int id ;
        int price;*/


   myfile.open("u.txt",ios::in);



        while(!myfile.eof()){
                for(int i=0 ;i<sizee;i++){
        myfile>>id>>item>>type>>price>>amount;
        arritems[i].itemId=id;
        arritems[i].itemName=item;
        arritems[i].itemType=  type;
        arritems[i].itemPrice= price;
        arritems[i].itemAmount= amount;



           //   cout<<setw(5)<<i+1<<setw(15)<<item<<setw(15)<<type<<setw(10)<<price<<setw(10)<<amount<<endl;

temp=id;


     }

      for(int i=0;i<sizee;i++)
              {

                cout<<setw(15)<<arritems[i].itemId<<setw(15)<<arritems[i].itemName<<setw(15)<<arritems[i].itemType<<setw(15)<<arritems[i].itemPrice<<setw(15)<<arritems[i].itemAmount<<setw(15)<<endl;
              }


              }

         myfile.close();



 }


    void Stock :: additems()
            {
                sizee++;
        /*int amount, price,id=temp+1;
        string item,type;*/
int id1=temp+1;


                fstream myfile;
   myfile.open("u.txt",ios::app);
    if (myfile){

                cout<<"Please Enter Item Name,type,price,amount: "<<endl;
                cin>>item>>type>>price>>amount;
                //cin>>price>>amount;
                myfile<<"\n"<<id1<<"\t"<<item<<"\t"<<type<<"\t"<<price<<"\t"<<amount;
    }

            }

    void Stock :: updateitems()
    {


        Stock object;
        object.printitems();
        int id2,newprice,newamount,choice2;

    cout<<"Enter The id of the item you want to update: "<<endl;
    cin>>id2;
    cout<<"Please Choose 1 for changing price or 2 for changing amount: "<<endl;
    cin>>choice2;
    if (choice2==1){
        cout<<"Enter The new price you want: "<<endl;
        cin>>newprice;
        object.arritems[id2-1].itemPrice=newprice;}
    if(choice2==2){
        cout<<"Enter The new Amount you want: "<<endl;
        cin>>newamount;
        object.arritems[id2-1].itemAmount=newamount;
    }





       ofstream  myfile("u.txt", ios::trunc);
       if(myfile)
       {
               for(int i=0; i<sizee ;i++)
               {
                   id=i+1;
                   item=object.arritems[i].itemName;
                   type=object.arritems[i].itemType;
                   price=object.arritems[i].itemPrice;
                   amount=object.arritems[i].itemAmount;
                myfile<<"\n"<<id<<"\t"<<item<<"\t"<<type<<"\t"<<price<<"\t"<<amount;


               }

       }

    }






