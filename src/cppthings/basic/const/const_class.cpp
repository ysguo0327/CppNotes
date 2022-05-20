#include <iostream>
using namespace std;

// 只有常成员函数能操作常量或者常对象
class Apple
{
private:
    int people[100];

public:
    Apple(int i);
    const int apple_num;
    void take(int num) const;
    int add();
    int add(int num) const;
    int getCount() const;
};

Apple::Apple(int i) : apple_num(i)
{
}

int Apple::add()
{
    take(1);
    return 0;
}

int Apple::add(int num) const
{
    take(num);
    return num;
}

void Apple::take(int num) const
{
    cout << "take func" << endl;
}

int Apple::getCount() const
{
    take(1);
    // 错误，const成员函数只能访问const成员函数
    // add();
    add(1);
    return apple_num;
}

int main(int argc, char const *argv[])
{
    Apple a(2);
    cout << a.getCount() << endl;
    a.add(4);
    const Apple b(3);
    // 错误，常对象只能访问常成员函数
    // b.add();
    return 0;
}
