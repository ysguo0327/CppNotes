#include <iostream>
using namespace std;

void move(char A, char B);
void hanno(int n, char A, char B, char C);

int main(int argc, char const *argv[])
{
    int disks;
    cin >> disks;
    hanno(disks, 'A', 'B', 'C');
    system("pause");
    return 0;
}

void move(char A, char B)
{
    cout << A << "->" << B << endl;
}

void hanno(int n, char A, char B, char C)
{
    if (n == 1)
    {
        move(A, C);
    }
    else
    {
        hanno(n - 1, A, C, B);
        move(A, C);
        hanno(n - 1, B, A, C);
    }
}