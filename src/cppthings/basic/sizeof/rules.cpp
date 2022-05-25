#include <iostream>
using namespace std;

// 1. 空类大小为一个字节
// 2. 一个类中，虚函数本身、成员函数（包括静态与非静态）和静态数据成员都是不占用类对象的存储空间。
// 3. 对于包含虚函数的类，不管有多少个虚函数，只有一个虚指针,vptr的大小。
// 4. 普通继承，派生类继承了所有基类的函数与成员，要按照字节对齐来计算大小
// 5. 虚函数继承，不管是单继承还是多继承，都是继承了基类的vptr。(32位操作系统4字节，64位操作系统 8字节)！
// 6. 虚继承，继承基类的vptr。

class A
{
};

class B
{
public:
    char b;
    virtual void fun(){};
    static int c;
    static int d;
    static int f;
};

class C
{
    virtual void fun();
    virtual void fun1();
    virtual void fun2();
};

class Base
{
public:
    char a;
    int b;
};

/**
 * @brief 此时Sub按照顺序：
 * char a
 * int b
 * short a
 * long b
 * 根据字节对齐4+4+8+8=24
 *
 * 或编译器优化
 * char a
 * short a
 * int b
 * long b
 * 根据字节对齐2+2+4+8=16
 */
class Sub : Base
{
public:
    short a;
    long b;
};

class D
{
    char c;
    Base b;
};

class E
{
    virtual void fun();
};

class F
{
    virtual void fun2();
};

class H : virtual public E, virtual public F
{
    virtual void fun3();
};

int main(int argc, char const *argv[])
{
    // 空类的大小为1字节
    cout << sizeof(A) << endl;
    // 字节对齐、静态变量不影响类的大小、vptr指针=8
    // 为什么是16？这是因为先分配char为1个字节，再分配vptr为8个字节，字节对齐需要补7个字节（vptr开始地址必须是8的倍数）。
    cout << sizeof(B) << endl;
    // 对于包含虚函数的类，不管有多少个虚函数，只有一个虚指针,vptr的大小。
    cout << sizeof(C) << endl;
    cout << sizeof(Base) << endl;
    // 编译器会对字节对齐进行优化，不是简单的叠加，16 或 24
    cout << sizeof(Sub) << endl;
    // 12
    cout << sizeof(D) << endl;
    // 派生类虚继承多个虚函数，会继承所有虚函数的vptr 8 8 16
    cout << sizeof(E) << " " << sizeof(F) << " " << sizeof(H);
    return 0;
}
