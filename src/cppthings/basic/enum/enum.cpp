#include<iostream>
using namespace std;
// 枚举有如下问题
// 1. 作用域不受限，容易冲突
// 2. 会隐式转换为int
// 3. 无法支持枚举类型的前向声明


// enum Color{RED, BLUE};
// 作用域不受限，会造成冲突
// enum Feeling{EXERCITED, BLUE};


// 使用域名空间可以解决冲突问题，但是由于域名空间可以被扩充，因此作用域的封闭性不高。因此，更有效的办法是使用类或者结构体进行限制。
namespace Color
{
    enum Type {
        RED = 15,
        BLUE
    };
};


// 通过结构体方式定义枚举类型
struct Color1
{
    enum type {
        RED = 102,
        BLUE
    };
};


// C++ 11 枚举类
enum class Color2 {
    RED = 1,
    BLUE
};

// 前向声明
enum class Color3:char;

// 定义
enum class Color3:char {
    RED = 'r',
    BLUE
};

int main(int argc, char const *argv[])
{
    Color::Type c = Color::BLUE;
    // 16
    cout << c << endl;

    Color1 c1;
    // 103
    cout << c1.BLUE << endl;

    Color2 c2 = Color2::BLUE;
    // 2
    cout << static_cast<int> (c2) << endl;

    char c3 = static_cast<char>(Color3::BLUE);
    // s
    cout << c3 << endl;
    return 0;
}
