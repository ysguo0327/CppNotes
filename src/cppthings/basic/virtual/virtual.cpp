#include <iostream>
using namespace std;

class A
{
public:
    // 纯虚函数
    virtual void show() = 0;
};

class B
{
public:
    virtual void f() = 0;
    // 成员函数中可以调用纯虚函数，构造函数和析构函数内部不能使用纯虚函数
    void g()
    {
        this->f();
    }
    B() {}
};

// 如果一个类从抽象类派生而来，它必须实现基类中所有纯虚函数，才能成为抽象类。
class C : public B
{
public:
    void f()
    {
        // 实现抽象类的纯虚函数
        cout << "C::f()" << endl;
    }
};

class Base
{

public:
    virtual void show() = 0;
    int getX()
    {
        return x;
    }
    // 构造函数不能是虚函数
    Base(int i)
    {
        x = i;
    }
    // 析构函数可以是虚析构函数
    virtual ~Base()
    {
        cout << "Destructor : Base" << endl;
    }

private:
    int x;
};

class Derived : public Base
{
public:
    // 如果不在派生类中覆盖纯虚函数，那么派生类会变成抽象类。
    void show()
    {
        cout << "In Derived \n";
    }

    Derived(int i) : Base(i) {}
    ~Derived() { cout << "Destructor : Derived" << endl; }
};

int main(int argc, char const *argv[])
{
    // Base b; // 不能创建抽象对象
    // Base *b = new Base();
    Base *bp = new Derived(1);
    bp->show();
    return 0;
}
