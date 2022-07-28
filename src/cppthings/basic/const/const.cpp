#include <iostream>
#include <string>
using namespace std;

void f1(const int i)
{
    // 错误，i值不能修改 
    // i = 10;
}

int main(int argc, char const *argv[])
{
    const int b = 10;
    // 错误，无法再次赋值
    // b = 0;
    const string s = "hello";
    // 错误，i必须赋初值
    // const int i;
    const int *ptr;
    // const位于*左侧，指针指向常量
    char const *a1;
    const char *a2;
    // const位于*右侧，指针本身是常量
    // char* const a3;
    // const char* const a4;

    // 错误，指向常量的指针无法修改其值，但是可以修改引用
    // *ptr = 10;
    int val = 3;
    ptr = &val;

    const int p = 10;
    // 必须使用const void * 类型保存const对象地址
    const void *vp = &p;

    // 常指针，无法改变指针指向，但是可以改变其值
    int num = 0;
    int *const ptr = &num;
    int *t = &num;
    *t = 1;

    // 指向常量的指针
    const int p = 3;
    const int *const ptr2 = &p;

    return 0;
}
