#include <iostream>
using namespace std;

class Apple
{

public:
    static void printMsg()
    {
        cout << "Welcome to Apple";
    }
};

int main(int argc, char const *argv[])
{
    Apple::printMsg();
    return 0;
}
