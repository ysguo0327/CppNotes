#include <iostream>
using namespace std;

class B
{
private:
    int i;

protected:
    int j;

public:
    int k;
};

class D : public B
{
public:
    void f()
    {
        // i = 1;
        j = 2;
        k = 3;
    }
};

int main(int argc, char const *argv[])
{
    B b;
    // b.i = 1;
    // b.j = 2;
    b.k = 3;
    return 0;
}
