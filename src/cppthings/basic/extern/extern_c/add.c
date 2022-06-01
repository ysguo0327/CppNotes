extern int add(int x, int y);

// 编译时先生成add.o文件
// 1. g++ -c add.cpp
// 2. gcc add.c add.o -o main
int main(int argc, char const *argv[])
{
    add(2, 3);
    return 0;
}
