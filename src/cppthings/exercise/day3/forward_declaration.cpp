#include <iostream>

// test forward declaration
class Fred;
class Barney
{
    public:
    void method() {
        // error! can't call method before class defination 
        // f -> xxxx();
    }
private:
    // error! can't create object
    // Fred f;
    Fred *f;
};

class Fred
{
    Barney b;
};

int main(int argc, char const *argv[])
{
    Barney b;
    Fred f;
    return 0;
}
