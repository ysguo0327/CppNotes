#include<iostream>
using namespace std;

class Base {
    int x;
    protected:
    int getX() {
        return x;
    }
    public:
    void setX(int n) {
        x = n;
    }
    void showX() {
        cout << x << endl;
    }
};

class Derived : protected Base {
    int y;
    public:
    void setY(int n) {
        y = n;
    }
    void setY() {
        y = getX();
    }
    void showY() {
        cout << y << endl;
    }
};

int main(int argc, char const *argv[])
{
    Derived obj;
    // error
    // obj.setX(10);
    obj.setY(20);
    // error
    // obj.showX();
    obj.showY();
    system("pause");
    return 0;
}
