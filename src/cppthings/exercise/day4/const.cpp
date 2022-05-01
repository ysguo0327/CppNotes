#include <iostream>
using namespace std;

void display(const double &r);

class A
{
public:
    A(int i, int j)
    {
        x = i;
        y = j;
    }

private:
    int x, y;
};

// test const
int main(int argc, char const *argv[])
{
    double d(9.5);
    display(d);
    A const a(3, 4);
    // a = A(4, 5);
    system("pause");
    return 0;
}

void display(const double &r)
{
    // can't modify const variable
    // r = 1.0;
    cout << r << endl;
}