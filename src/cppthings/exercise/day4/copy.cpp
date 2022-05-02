#include <iostream>
#include "copy.h"
using namespace std;

Clock::Clock(int NewH, int NewM, int NewS)
{
    this->Hour = NewH;
    this->Minute = NewM;
    this->Second = NewS;
}

// test copy construct
Clock::Clock(Clock &c)
{
    this->Hour = c.Hour;
    this->Minute = c.Minute;
    this->Second = c.Second;
}

void Clock::SetTime(int NewH, int NewM, int NewS)
{
    this->Hour = NewH;
    this->Minute = NewM;
    this->Second = NewS;
}

void Clock::ShowTime()
{
    cout << this->Hour << endl;
    cout << this->Minute << endl;
    cout << this->Second << endl;
}


int main(int argc, char const *argv[])
{
    Clock c(0, 0, 0);
    c.SetTime(10, 20, 30);
    c.ShowTime();
    Clock c1(c);
    c1.ShowTime();
    c1.SetTime(90, 98, 99);
    c1.ShowTime();
    system("pause");
    return 0;
}
