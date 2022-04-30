#include <iostream>
using namespace std;


// test static member function
class A
{
public:
    static void f(A a);

private:
    int x;
};

void A::f(A a)
{
    // cout << x;
    cout << a.x << endl;
}

int main(int argc, char const *argv[])
{
    A a;
    a.f(A());
    system("pause");
    return 0;
}
