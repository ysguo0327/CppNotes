#include <iostream>
using namespace std;
// x的n次方
double power(double x, int n);
int main(int argc, char const *argv[])
{
    int x, n;
    cout << "Enter base x: ";
    cin >> x;
    cout << "Enter power n: ";
    cin >> n;
    cout << "Result is: " << power(x, n) << endl;
    system("pause");
    return 0;
}

double power(double x, int n)
{
    double val = 1.0;
    while (n--)
    {
        val *= x;
    }
    return val;
}
