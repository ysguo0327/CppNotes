#include<iostream>
using namespace std;

class A {
    friend class B;
    public:
    void Display(){
        cout << x << endl;
    }
    private:
    int x;
};

class B {
    public:
    void Set(int i);
    void Display();
    private:
    A a;
};


void B::Set(int i) {
    a.x = i;
}

void B::Display() {
    a.Display();
}

int main(int argc, char const *argv[])
{
    B b;
    b.Set(10);
    b.Display();
    system("pause");
    return 0;
}

