#include <iostream>
using namespace std;

template <class T, int MAXSIZE>
class Stack
{
private:
    T elem[MAXSIZE];
    int top;

public:
    Stack() { top = 0; };
    void push(T e);

    T pop();

    bool empty()
    {
        if (top <= -1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    void setEmpty()
    {
        top = -1;
    }

    bool full()
    {
        if (top >= MAXSIZE - 1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};

template <class T, int MAXSIZE>
void Stack<T, MAXSIZE>::push(T e)
{
    if (full())
    {
        cout << "Stack is full" << endl;
        return;
    }
    elem[++top] = e;
}

template <class T, int MAXSIZE>
T Stack<T, MAXSIZE>::pop()
{
    if (empty())
    {
        cout << "Stack is empty" << endl;
        return 0;
    }
    return elem[top--];
}

int main(int argc, char const *argv[])
{
    Stack<int, 10> iStack;
    Stack<char, 10> cStack;
    iStack.setEmpty();
    cStack.setEmpty();
    cout << "inStack" << endl;
    int i;
    for (int i = 1; i < 11; i++)
    {
        iStack.push(i);
    }
    for (int i = 1; i < 11; i++)
    {
        cout << iStack.pop() << "\t";
    }

    cStack.push('A');
    cStack.push('B');
    cStack.push('C');
    cStack.push('D');
    cStack.push('E');
    for (i = 1; i < 6; i++)
    {
        cout << cStack.pop() << "\t";
    }
    cout << endl;
    return 0;
}
