#include <iostream>
using namespace std;

enum weekday
{
    s,
    m,
    t,
    w,
    thu,
    f,
    s1
};

// test enum
int main(int argc, char const *argv[])
{
    enum weekday wek = s;
    for (int i = wek; i != f; i++)
    {
        cout << i << endl;
        cout << s << endl;
        cout << wek + i << endl;
    }
    system("pause");
    return 0;
}
