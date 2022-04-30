#include <iostream>
using namespace std;

inline double calArea(double radius);

int main(int argc, char const *argv[])
{
    double r(3.0);
    double area;
    area = calArea(r);
    cout << area << endl;
    system("pause");
    return 0;
}

inline double calArea(double radius)
{
    return 3.14 * radius * radius;
}
