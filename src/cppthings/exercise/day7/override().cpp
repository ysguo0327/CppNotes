#include<iostream>
using namespace std;

class Time {
    private:
    int hh, mm, ss;
    public:
    Time(int h = 0, int m = 0, int s = 0) : hh(h), mm(m), ss(s) {}
    void operator()(int h, int m, int s) {
        hh = h;
        mm = m;
        ss = s;
    }

    void showTime() {
        cout << hh << ":" << mm << ":" << ss << endl;
    }
};

int main(int argc, char const *argv[])
{
    Time t1(12, 12, 12);
    t1.showTime();
    t1.operator()(23, 20, 34);sss
    t1.showTime();
    t1(10, 10, 10);
    t1.showTime();
    system("pause");
    return 0;
}
