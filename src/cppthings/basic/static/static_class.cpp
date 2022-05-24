#include <iostream>
using namespace std;

class Apple
{
    int i;

public:
    Apple()
    {
        i = 0;
        cout << "Inside Constructor\n";
    }

    ~Apple()
    {
        cout << "Inside Destructor\n";
    }
};

int main(int argc, char const *argv[])
{
    int x = 0;
    if (x == 0) {
        // 先执行析构
        Apple obj;
        // 先执行End of main
        static Apple obj2;
    }
    cout << "End of main\n";
    return 0;
}
