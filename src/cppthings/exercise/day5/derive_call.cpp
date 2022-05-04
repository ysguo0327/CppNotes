#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout << "Constructing A" << endl;
    }

    ~A()
    {
        cout << "Destructing A" << endl;
    }
};

class B
{
public:
    B()
    {
        cout << "Constructing B" << endl;
    }

    ~B()
    {
        cout << "Destructing B" << endl;
    }
};

class C
{
public:
    C()
    {
        cout << "Constructing C" << endl;
    }

    ~C()
    {
        cout << "Destructing C" << endl;
    }
};

class D : public C
{
public:
    D()
    {
        cout << "Constructing D" << endl;
    }

    ~D()
    {
        cout << "Destrucing D" << endl;
    }

    B b;
    A a;
    C c;
};

int main(int argc, char const *argv[])
{
    D d;
    system("pause");
    return 0;
}
