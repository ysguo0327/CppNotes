#include <iostream>
using namespace std;

class Point
{
protected:
    int x, y;

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
        cout << "constructing point" << endl;
    }
};

class Line : public Point
{
protected:
    int len;

public:
    Line(int a, int b, int l) : Point(a, b)
    {
        len = 1;
        cout << "constructing Line, len..." << len << endl;
    }
};

int main(int argc, char const *argv[])
{
    Line L1(1, 2, 3);
    system("pause");
    return 0;
}
