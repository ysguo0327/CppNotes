#include <iostream>
using namespace std;
int i = 1;
// test static variable
int main(int argc, char const *argv[])
{
    static int a;
    int b = -10;
    int c = 0;
    void other(void);
    void other2(void);
    cout << "---MAIN---\n";
    // 1 0 -10 0
    cout << " i: " << i << " a: " << a << " b: " << b << " c: " << c << endl;
    c = c + 8;
    // 33 4 0 15
    other();
    // 65 6 0 15
    other();
    other2();
    system("pause");

    return 0;
}

void other(void)
{
    static int a = 2;
    static int b;
    int c = 10;
    a = a + 2;
    i = i + 32;
    c = c + 5;
    cout << "---OTHER---\n";
    cout << " i: " << i << " a: " << a << " b: " << b << " c: " << c << endl;
}

void other2(void) {
    cout << " i: " << i << " a: " << a << " b: " << b << " c: " << c << endl;
}