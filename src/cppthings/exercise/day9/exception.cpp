#include <iostream>
using namespace std;

void Errhander(int n) throw()
{
    try
    {
        if (n == 1)
        {
            throw n;
        }
        else if (n == 2)
        {
            throw "error";
        }
        else
        {
            throw 1.0;
        }
    }
    catch (...)
    {
        cout << "catch an exception" << endl;
    }
}

int main(int argc, char const *argv[])
{
    Errhander(1);
    Errhander(2);
    Errhander(3);
    return 0;
}
