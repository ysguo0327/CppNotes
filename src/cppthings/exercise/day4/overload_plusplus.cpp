#include <iostream>
using namespace std;

class Time
{
public:
    Time(int h = 0, int m = 0, int s = 0)
    {
        hour = h;
        minute = m;
        second = s;
    }
    Time operator++();
    Time operator++(int);
    void showTime()
    {
        cout << "current time: " << hour << ":" << minute << ":" << second << endl;
    }

private:
    int hour, minute, second;
};

// test overload operator ++
Time Time::operator++(int n)
{
    Time temp = *this;
    ++(*this);
    return temp;
}

Time Time::operator++()
{
    ++second;
    if (second == 60)
    {
        second = 0;
        ++minute;
        if (minute == 60)
        {
            minute = 0;
            hour++;
            if (hour == 24)
            {
                hour = 0;
            }
        }
    }
    return *this;
}

int main(int argc, char const *argv[])
{
    Time t(23, 59, 59);
    ++t;
    t.showTime();
    (t++).showTime();
    t.showTime();
    system("pause");
    return 0;
}
