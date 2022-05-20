#include <iostream>

using namespace std;

// 子类访问父类私有函数
// 通过获取VTABLE的地址即可获取父类私有虚函数的地址，进而调用它。
class A
{
private:
    virtual void WhoAmI()
    {
        cout << "I am class A" << endl;
    }
    virtual void f0()
    {
        cout << "This is f0" << endl;
    }
    virtual void f1()
    {
        cout << "This is f1" << endl;
    }
};

class B : public A
{
public:
    void WhoAmIForB()
    {
        cout << "I am class B" << endl;
    }
};

typedef void (*FUNC)();

int main(int argc, char *argv[])
{
    B b;
    b.WhoAmIForB();
    // b.WhoAmI(); error C2248: “A::WhoAmI”: 无法访问 private 成员(在“A”类中声明)
    // WhoAmI
    FUNC func = (FUNC)((int *)(*((int *)(*(int *)(&b)))));
    // f0
    FUNC func2 = (FUNC)((int *)(*((int *)(*(int *)(&b)) + 2)));
    // f1
    FUNC func3 = (FUNC)((int *)(*((int *)(*(int *)(&b)) + 4)));
    // I am class A
    func();
    // This is f0
    func2();
    // This is f1
    func3();
    return 0;
}