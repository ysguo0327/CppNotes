// volatile 关键字是一种类型修饰符，用它声明的类型变量表示可以被某些编译器未知的因素（操作系统、硬件、其它线程等）更改。
// 所以使用 volatile 告诉编译器不应对这样的对象进行优化。
// 如果没有volatile关键字修饰，编译器会进行优化，认为main中没有修改i的值，导致程序一直是死循环
// 这时候就该使用volatile通知编译器这个变量是一个不稳定的，在遇到此变量时候不要优化。
volatile static int i = 0;

void dosomething() {
    // do something
}

// 假设使用
void interrupt() {
    i = 1;
}

int main(int argc, char const *argv[])
{
    while(1) {
        if (i) dosomething();
    }
    return 0;
}
