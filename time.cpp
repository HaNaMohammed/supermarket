#include "time.h"
#include<iomanip>
#include<stdlib.h>
#include <sstream>
#include<cstring>
#include <cstdlib>
#include<ctime>

Time ArrivalTime;
Time Duration;
Time::Time()
{
    //ctor
}

void Time:: setHours(int h)
{
    if(h>=0&&h<=4)
    {
        hours=h;
    }
    else
        cout<<"Error!!"<<endl;
}
int Time::getHours()
{
    return   hours;
}
void Time::setMinutes(int m)
{
     if(m>=0&&m<=59)
    {
        minutes=m;
    }
    else
        cout<<"Error!!"<<endl;
}
int Time::getMinutes()
{
    return minutes;
}

void Time::get_ArrivalTime()
{

    // current date/time based on current system
   time_t now = time(0);

   // convert now to string form
   char* dt = ctime(&now);

     string s=dt;
     string x0,x1;               // x0=first index in string of time
     int y0,y1;                 // x1=second index in the string of time
     x0=(s.at(11));
     x1=(s.at(12));
     y0 =atoi (x0.c_str());        //function to convert string to int
     y1 =atoi (x1.c_str());       //function to convert string to int
     ArrivalTime.hours= (y0*10)+ y1;
     cout<<"hours = "<<ArrivalTime.hours<<endl;

     string m0,m1;               // m0=first index in string of time
     int z0,z1;                 // m1=second index in the string of time
     m0=(s.at(14));
     m1=(s.at(15));
     z0 =atoi (m0.c_str());        //function to convert string to int
     z1 =atoi (m1.c_str());       //function to convert string to int
     ArrivalTime.minutes= (z0*10)+ z1;
     cout<<"minutes = "<<ArrivalTime.minutes<<endl;


   hours=ArrivalTime.hours;
   minutes=ArrivalTime.minutes;


}

void Time::get_Duration()
{

    srand(time (0));


     Duration.hours=  1+(rand ()%4) ; //function to get the hours from 1 to 4
    Duration.minutes= 1+(rand ()%59); //function to get the minutes from 1 to 59


 cout <<"minutes right "<<Duration.minutes<<endl;
 cout<<"hours good "<<Duration.hours<<endl;
hours=Duration.hours;
minutes=Duration.minutes;


}

Time Time:: operator+ (Time& T)
{
    Time CurrentTime;
    CurrentTime.hours=hours+T.hours;
    CurrentTime.minutes=minutes+T.minutes;
    if(CurrentTime.minutes>59) // condition to handle if minutes >59
    {
        CurrentTime.hours=CurrentTime.hours+1;
        CurrentTime.minutes=CurrentTime.minutes-59;

    }
    if(CurrentTime.hours>24)  // condition to handle if hours >24
    {
        CurrentTime.hours=CurrentTime.hours-24;

    }
    return CurrentTime;


}

ostream&  operator <<(ostream& out, Time& t)
{
    out<<t.hours<<":"<<t.minutes<<endl;
    return out;
}

