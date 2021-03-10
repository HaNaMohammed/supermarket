#include "admin.h"
#include <string.h>
#include "Customer.h"
Customer AdmiN;
void Admin :: GetTotal()
{

double x= AdmiN.GetTotal();

cout<<"The total price of the items you bought = "<< x<<endl;


}

void Admin :: GetRevenue()
{
    cout<<"total revenue = "<<  AdmiN.GetRevenue()<<endl;
}
