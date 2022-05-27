#include <iostream>
#include <stdio.h>

using namespace std;

// 函数指针
typedef void (*Fun)();

class Base
{
public:
    Base() {}
    virtual void fun1()
    {
        cout << "Base::fun1" << endl;
    }
    virtual void fun2()
    {
        cout << "Base::fun2" << endl;
    }
    virtual void fun3()
    {
    }
    ~Base(){};
};

class Derived : public Base
{
public:
    Derived(){};
    void fun1()
    {
        cout << "Derived::fun1" << endl;
    }
    void fun2()
    {
        cout << "Derived::fun2" << endl;
    }
    ~Derived(){};
};

Fun getAddr(void *obj, unsigned int offset)
{
    void *vptr_addr = (void *)*(unsigned long *)obj;
    printf("vptr_addr: %p\n", vptr_addr);
    void *func_addr = (void *)*((unsigned long *)vptr_addr + offset);
    printf("func_addr: %p\n", func_addr);
    return (Fun)func_addr;
}

int main(int argc, char const *argv[])
{
    Base ptr;
    Derived d;
    Base &pp = ptr;
    Base *bpt;
    Base *pt = new Derived();
    Base &p = d;
    ptr.fun1();
    pp.fun1();
    pt->fun1();
    p.fun1();
    // 手动查找vptr和vtable
    Fun f1 = getAddr(pt, 0);
    (*f1)();
    Fun f2 = getAddr(pt, 2);
    (*f2)();
    printf("this is a splitline");
    // Fun f3 = getAddr(bpt, 0);
    // (*f3)();
    // Fun f4 = getAddr(bpt, 2);
    // (*f4)();
    delete pt;
    return 0;
}
