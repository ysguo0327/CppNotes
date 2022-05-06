#include <iostream>
using namespace std;

class A
{
public:
    virtual ~A()
    {
        cout << "call A::~A()" << endl;
    }
};

class B : public A
{
    char *buf;

public:
    B(int i)
    {
        buf = new char[i];
    }
    ~B()
    {
        delete[] buf;
        cout << "class B::~B()" << endl;
    }
};

int main(int argc, char const *argv[])
{
    A *a = new B(10);
    delete a;
    return 0;
}
