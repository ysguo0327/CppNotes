#include <iostream>
#include <fstream>
#include <vector>
#include <cstring>
using namespace std;

class Person
{
private:
    char name[20];
    char id[18];
    int age;
    char addr[20];

public:
    Person() {}
    Person(char *n, char *pid, int Age, char *Addr)
    {
        strcpy(name, n);
        strcpy(id, pid);
        age = Age;
        strcpy(addr, Addr);
    }

    void display()
    {
        cout << name << "\t" << id << "\t" << age << "\t" << addr << endl;
    }
};

int main(int argc, char const *argv[])
{
    vector<Person> v;
    vector<Person>::iterator pos;
    char ch;
    ofstream out("person.dat", ios::out | ios::app | ios::binary);
    char Name[20], ID[18], Addr[20];
    int Age;
    cout << "------输入个人档案------" << endl;
    do
    {
        cout << "姓名：";
        cin >> Name;
        cout << "身份证：";
        cin >> ID;
        cout << "年龄：";
        cin >> Age;
        cout << "地址：";
        cin >> Addr;
        Person per(Name, ID, Age, Addr);
        out.write((char *)&per, sizeof(per));
        cout << "Enter another person(y/n)?";
        cin >> ch;
    } while (ch == 'y');
    out.close();
    ifstream in("person.dat", ios::in | ios::binary);
    Person s;
    in.read((char *)&s, sizeof(s));
    while (!in.eof())
    {
        v.push_back(s);
        in.read((char *)&s, sizeof(s));
    }
    cout << "--------文件读取数据--------" << endl;
    pos = v.begin();
    for (pos = v.begin(); pos != v.end(); pos++)
    {
        (*pos).display();
    }
    return 0;
}
