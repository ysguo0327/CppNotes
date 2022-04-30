#include <iostream>
using namespace std;

void swap(int &a, int &b);

int main(int argc, char const *argv[])
{
    int a(5);
    int b(10);
    swap(a, b);
    cout << "a=" << a << " b=" << b;
    system("pause");
    return 0;
}

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}