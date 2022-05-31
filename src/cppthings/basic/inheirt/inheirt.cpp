#include <iostream>

using namespace std;

// 父类引用调用子类私有实现
class Base
{
public:
    // 纯虚函数
    virtual void test() = 0;
};

class Sub : public Base
{

private:
    // 私有实现
    void test()
    {
        cout << "Sub::test()" << endl;
    }
};


int main(int argc, char const *argv[])
{
    Base *base = new Sub();
    base->test();
    delete base;
    return 0;
}
