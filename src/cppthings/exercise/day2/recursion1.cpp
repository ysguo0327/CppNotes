#include <iostream>
using namespace std;

// test recursion
int f(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * f(n - 1);
    }
}
int main(int argc, char const *argv[])
{
    cout << "input x: ";
    int x;
    cin >> x;
    cout << f(x) << endl;
    system("pause");
    return 0;
}
