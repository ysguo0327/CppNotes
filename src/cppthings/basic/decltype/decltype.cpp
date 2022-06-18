#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i = 4;
    int arr[5] {1};
    int *ptr = arr;
    struct S {double d;} s;
    void overloaded(int);
    void overloaded(char);
    int && RvalRef();
    const bool Func(int);

    // 规则1：推导其相应类型
    // int[]
    decltype (arr) var1;
    // int *
    decltype (ptr) var2;
    // double
    decltype (s.d) var3;
    // 重载函数，编译报错
    // decltype (overloaded) var4;

    // 规则2：将亡值。推导为类型的右值引用
    // 右值
    decltype (RvalRef()) var5 = 1;

    // 规则3：推导为类型的引用
    // int&
    decltype ((i)) var6 = i;
    // int& 条件表达式返回左值
    decltype (true ? i : i) var7 = i;
    // int&  ++i返回左值
    decltype (++i) var8 = i;
    // int& []操作返回左值
    decltype (arr[5]) var9 = i;
    // int& *操作返回左值
    decltype (*ptr) var10 = i; 
    // const char(&)[6] 字符串常量返回const左值
    decltype ("hello") var11 = "hello";

    // 规则4：推导为本类型
    // const int
    decltype (1) var12;
    // const bool
    decltype (Func(1)) var = true;
    // int i++返回右值
    decltype (i++) var14 = i;

    return 0;
}
