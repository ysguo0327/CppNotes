#include<iostream>
using namespace std;

class Base {
    int x;
    public:
    void setX(int n) {
        x = n;
    }

    int getX() {
        return x;
    }

    void showX() {
        cout << x << endl;
    }

};

class Derived : public Base {
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
    obj.setX(10);
    obj.setY(20);
    obj.showX();
    obj.showY();
    obj.setY();
    obj.showX();
    obj.showY();
    system("pause");
    return 0;
}
