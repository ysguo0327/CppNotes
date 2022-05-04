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

    B b;
    A a;
};

// test constructor and destructor
int main(int argc, char const *argv[])
{
    C c;
    system("pause");
    return 0;
}
