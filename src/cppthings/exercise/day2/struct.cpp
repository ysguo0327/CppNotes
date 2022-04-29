#include <iostream>
using namespace std;
struct student
{
    int num;
    char name[20];
    char gender;
};

// test struct, note that the complier may add padding for alignment requirements.
int main(int argc, char const *argv[])
{
    student s = {10, "ysguo", 'M'};
    cout << s.num << endl;
    cout << sizeof(s.num)<< endl;
    cout << sizeof(s.name)<< endl;
    cout << sizeof(s.gender)<< endl;
    cout << sizeof(s)<< endl;
    system("pause");

}