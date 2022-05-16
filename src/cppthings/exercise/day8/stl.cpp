#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(int argc, char const *argv[])
{
    string name[] = {"zhang", "li", "wang"};
    double salary[] = {1000, 2000, 3000};
    map<string, double> sal;
    map<string, double>::iterator p;
    for (int i = 0; i < 3; i++)
    {
        sal.insert(make_pair(name[i], salary[i]));
    }
    sal["tom"] = 5000;
    sal["bob"] = 6000;
    for (p = sal.begin(); p     != sal.end(); p++)
    {
        cout << p->first << "\t" << p->second << endl;
    }

    string person;
    cout << "search name: ";
    cin >> person;
    int flag = 1;
    for (p = sal.begin(); p != sal.end(); p++)
    {
        if (p->first == person)
        {
            cout << p->second << endl;
            flag = 0;
        }
    }
    if (flag)
    {
        cout << "cannot find the person" << endl;
    }
    cout << "delete person: ";
    cin >> person;
    map<string, double>::iterator it;
    it = sal.find(person);
    if (it != sal.end())
    {
        cout << "find success: " << (*it).first << ":" << (*it).second << endl;
        sal.erase(it);
        cout << "deleted success" << endl;
    }
    cout << "delete result: " << endl;
    for (p = sal.begin(); p != sal.end(); p++)
    {
        cout << p->first << ":" << p->second << endl;
    }

    return 0;
}
