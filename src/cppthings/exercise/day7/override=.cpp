#include <iostream>
using namespace std;

class X
{
public:
    X &operator=(const X &x)
    {
        cout << "a: ";
        return *this;
    }
};

int main(int argc, char const *argv[])
{
    X obj1, obj2, obj3;
    obj1 = obj2;
    obj1.operator=(obj2);
    obj1 = obj2 = obj3;
    system("pause");
    return 0;
}