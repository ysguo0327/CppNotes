#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
    Employee(string name, string id);
    string getName();
    string getId();
    float getSalary();
    virtual void print();

private:
    string name;
    string id;
};

Employee::Employee(string name, string id)
{
    this->name = name;
    this->id = id;
}

string Employee::getName()
{
    return this->name;
}

string Employee::getId()
{
    return this->id;
}

float Employee::getSalary()
{
    return 10000.0;
}

void Employee::print()
{
    cout << "name: " << this->name << " id: " << this->id << endl;
}

class Manager : public Employee
{
public:
    Manager(string name, string id, float s = 10000.0) : Employee(name, id)
    {
        weeklySalary = s;
    }

    void setSalary(float s)
    {
        weeklySalary = s;
    }

    float getSalary()
    {
        return weeklySalary;
    }

    void print()
    {
        cout << "manager: " << getName() << " id: " << getId() << " weeklySalary: " << weeklySalary << endl;
    }

private:
    float weeklySalary;
};

int main(int argc, char const *argv[])
{
    Employee e("zhangsan", "No0001"), *pM;
    Manager m("lisi", "No0002");
    m.print();
    pM = &m;
    pM->print();
    Employee &rM = m;
    rM.print();
    return 0;
}
