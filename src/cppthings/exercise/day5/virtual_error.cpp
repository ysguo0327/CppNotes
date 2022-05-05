#include<iostream>
using namespace std;

class A {
    public:
    void vf () {
        cout << "I come from class A" << endl;
    }
};

class B : public A {};
class C : public A {};

class D : public B, public C {};

int main(int argc, char const *argv[])
{
    D d;
    // compile error
    // d.vf();
    system("pause");
    return 0;
}
