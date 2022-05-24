#include <iostream>
#include "inline.h"

using namespace std;

// 函数声明
int Foo(int x, int y);

// 函数实现
inline int Foo(int x, int y)
{
    return x + y;
}

// 定义处添加inline关键字
inline void A::f1(int x)
{
}

int main(int argc, char const *argv[])
{
    cout << Foo(1, 2) << endl;
    return 0;
}
