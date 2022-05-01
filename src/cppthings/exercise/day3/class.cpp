#include <iostream>
using namespace std;

const float PI = 3.1415926;
const float FencePrice = 35;
const float ConcretePrice = 20;

class Circle
{
private:
    float radius;

public:
    Circle(float r);
    float Circumference() const;
    float Area() const;
};

Circle::Circle(float r)
{
    radius = r;
}

float Circle::Circumference() const
{
    return 2 * PI * radius;
}

float Circle::Area() const
{
    return PI * radius * radius;
}

int main(int argc, char const *argv[])
{
    float radius;

    float FenceCost, ConcreteCost;
    cout << "Enter the radius: ";
    cin >> radius;
    Circle Pool(radius);
    Circle PoolRim(radius + 3);
    FenceCost = PoolRim.Circumference() * FencePrice;
    cout << "Fencing Cost: " << FenceCost << endl;
    ConcreteCost = (PoolRim.Area() - Pool.Area()) * ConcretePrice;
    cout << "Concrete Const: " << ConcreteCost << endl;
    system("pause");
    return 0;
}
