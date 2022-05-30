#include<stdio.h>


int main(int argc, char const *argv[])
{
    
    // compile code without optimization option
    // const int local = 10;
    // compile code with optimization option
    const volatile int local = 10;
    int *ptr = (int*) &local;

    printf("Initial value of local: %d \n", local);
    *ptr = 100;
    printf("Modified value of local: %d \n", local);
    return 0;
}
