// 多线程应用中被多个任务共享的变量。 当多个线程共享某一个变量时，该变量的值会被某一个线程更改，应该用 volatile 声明。
// volatile的意思是让编译器每次操作该变量时一定要从内存中真正取出，而不是使用已经存在寄存器中的值。
// bStop 为共享全局变量
volatile bool bStop = false;

//第一个线程
void threadFunc1()
{
    while (!bStop)
    {
        // do something
    }
}

//第二个线程终止上面的线程循环
void threadFunc2()
{
    bStop = true;
}