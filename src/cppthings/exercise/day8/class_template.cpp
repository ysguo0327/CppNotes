#include <iostream>
#include <cstring>

using namespace std;

const int Size = 5;

template <class T>
class Array
{
private:
    T a[Size];

public:
    Array()
    {
        for (int i = 0; i < Size; i++)
        {
            a[i] = 0;
        }
    }

    T &operator[](int i);
    void Sort();
};

template <class T>
T &Array<T>::operator[](int i)
{
    if (i < 0 || i > Size - 1)
    {
        cout << "数组越界！" << endl;
        exit(1);
    }
    return a[i];
}

template <class T>
void Array<T>::Sort()
{
    int p;
    for (int i = 0; i < Size - 1; i++)
    {
        p = i;
        for (int j = i; j < Size; j++)
        {
            if (a[p] < a[j])
            {
                p = j;
            }
        }

        T t = a[p];
        a[p] = a[i];
        a[i] = t;
    }
}

template <>
void Array<char *>::Sort()
{
    int p;
    for (int i = 0; i < Size - 1; i++)
    {
        p = i;
        for (int j = i + 1; j < Size; j++)
        {
            if (strcmp(a[p], a[j]) < 0)
            {
                p = j;
            }
        }

        char *t = a[p];
        a[p] = a[i];
        a[i] = t;
    }
}

int main(int argc, char const *argv[])
{
    Array<int> a1;
    Array<char *> b1;
    a1[0] = 1;
    a1[1] = 23;
    a1[2] = 6;
    a1[3] = 3;
    a1[4] = 9;
    a1.Sort();
    for (int i = 0; i < 5; i++)
    {
        cout << a1[i] << "\t";
    }
    cout << endl;
    b1[0] = "x1";
    b1[1] = "ya";
    b1[2] = "ad";
    b1[3] = "be";
    b1[4] = "bc";
    b1.Sort();
    for (int i = 0; i < 5; i++)
    {
        cout << b1[i] << "\t";
    }
    cout << endl;
    return 0;
}
