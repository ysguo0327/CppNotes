#include <iostream>
using namespace std;

// 定义了一个变量pFun，这个变量是个指针，指向返回值为空和参数为int的函数的指针！
// 这里就定义了一个指向函数(这个函数参数仅仅为一个 int 类型，函数返回值是 void 类型)的指针
void (*pFun)(int);

// 定义一种类型
// typedef 定义可以简化函数指针的定义
typedef void (*func)(void);

void myfunc(void)
{
    cout << "myfunc" << endl;
}

void myfun2(int a)
{
    cout << a << endl;
}

int main(int argc, char const *argv[])
{
    // 函数实例
    func pfun = myfunc;
    pfun();
    // 给指针赋值，函数的地址就是函数名称
    pFun = myfun2;
    pFun(2);
    (*pFun)(2);
    return 0;
}
