#include <iostream>
using namespace std;

class Time
{

private:
    int hh, mm, ss;

public:
    Time(int h = 0, int m = 0, int s = 0) : hh(h), mm(m), ss(s) {}
    void operator()(int h, int m, int s)
    {
        hh = h;
        mm = m;
        ss = s;
    }

    void ShowTime()
    {
        cout << hh << ":" << mm << ":" << ss << endl;
    }
};

// test overload ()
int main(int argc, char const *argv[])
{
    Time t1(12, 12, 12);
    t1.ShowTime();
    t1.operator()(23, 23, 23);
    t1.ShowTime();
    t1(10, 10, 10);
    t1.ShowTime();
    system("pause");
    return 0;
}
