#include <iostream>
using namespace std;
// 如果想把一个函数定义为内联函数，则需要在函数名前面放置关键字 inline，在调用函数之前需要对函数进行定义。如果已定义的函数多于一行，编译器会忽略 inline 限定符。
class Base
{
public:
    inline virtual void who()
    {
        cout << "I am Base\n";
    }

    virtual ~Base() {}
};

class Derived : public Base
{

public:
    // 类内部只要定义在函数其实都是默认inline的，不写inline时隐式内联
    inline void who()
    {
        cout << "I am Derived\n";
    }
};

int main(int argc, char const *argv[])
{
    // 此处的虚函数 who()，是通过类（Base）的具体对象（b）来调用的，编译期间就能确定了，所以它可以是内联的，但最终是否内联取决于编译器。
    Base b;
    b.who();
    // 此处的虚函数是通过指针调用的，呈现多态性，需要在运行时期间才能确定，所以不能为内联。
    Base *ptr = new Derived();
    ptr->who();
    // 因为Base有虚析构函数（virtual ~Base() {}），所以 delete 时，会先调用派生类（Derived）析构函数，再调用基类（Base）析构函数，防止内存泄漏。
    delete ptr;
    return 0;
}
