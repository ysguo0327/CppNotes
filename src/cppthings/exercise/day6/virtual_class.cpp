#include <iostream>
using namespace std;

class Figure
{
protected:
    double x, y;

public:
    void set(double i, double j)
    {
        x = i;
        y = j;
    }

    virtual void area() = 0;
};

class Triangle : public Figure
{
public:
    void area()
    {
        cout << "triangle area is: " << x * y * 0.5 << endl;
    }
};

class Rectangle : public Figure
{
public:
    void area()
    {
        cout << "rectangle area is: " << x * y << endl;
    }
};

// test abstract class
int main(int argc, char const *argv[])
{
    Figure *pF = NULL;
    Rectangle r;
    Triangle t;
    t.set(10, 20);
    pF = &t;
    pF->area();
    r.set(10, 20);
    pF = &r;
    pF->area();
    Figure &rF = t;
    rF.set(10, 20);
    rF.area();
    return 0;
}
