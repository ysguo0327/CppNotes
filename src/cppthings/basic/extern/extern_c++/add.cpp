#include <iostream>
using namespace std;

// 引用C的头文件时，需要加extern "C"
extern "C"
{
#include "add.h"
}

// 编译时要先生成add.o文件，然后再编译
// 1. gcc -c add.c
// 2. g++ add.cpp add.o -o main
int main(int argc, char const *argv[])
{
    int result = add(2, 4);
    cout << "add result: " << result << endl;
    system("pause");
    return 0;
}
