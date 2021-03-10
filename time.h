#include <iostream>
#ifndef TIME_H
#define TIME_H
#include <ctime>
#include <stdlib.h>
#include <windows.h>
using namespace std;


class Time
{
    public:
        Time();
        void setHours(int);
        int getHours();
        void setMinutes(int);
        int getMinutes();
        void get_ArrivalTime();
        void get_Duration();
        Time operator+ (Time& T);
        friend ostream &operator<<(ostream& out ,Time& t);


    private:
        int hours;
        int minutes;
};

#endif // TIME_H
