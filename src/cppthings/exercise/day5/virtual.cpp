#include<iostream>
using namespace std;

class A {
    public:
    void vf () {
        cout << "I come from A" << endl;
    }
};

class B : virtual public A {};
class C : virtual public A {};

class D : public B, public C {};

int main(int argc, char const *argv[])
{
    D d;
    d.vf();
    system("pause");
    return 0;
}
