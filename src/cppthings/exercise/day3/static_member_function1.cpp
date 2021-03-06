#include <iostream>
using namespace std;


// test static member function
class Application
{
public:
    static void f();
    static void g();

private:
    static int global;
};

int Application::global = 0;
void Application::f()
{
    global = 5;
}

void Application::g()
{
    cout << global << endl;
}

int main(int argc, char const *argv[])
{
    Application::f();
    Application::g();
    system("pause");
    return 0;
}
