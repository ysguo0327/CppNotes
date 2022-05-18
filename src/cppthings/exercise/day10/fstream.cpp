#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[])
{
    fstream ioFile;
    ioFile.open("./a.dat", ios::out);
    ioFile << "Tom " << 76 << " " << 92 << " " << 85 << endl;
    ioFile << "Jerry " << 89 << " " << 98 << " " << 90 << endl;
    ioFile << "Bob " << 63 << " " << 82 << " " << 77 << endl;
    ioFile << "Lili " << 86 << " " << 95 << " " << 92 << endl;
    ioFile.close();
    ioFile.open("./a.dat", ios::in | ios::binary);
    char name[10];
    int chinese, math, english;
    cout << "姓名\t语文\t数学\t英语\t" << endl;
    ioFile >> name;
    while (!ioFile.eof())
    {
        ioFile >> chinese >> math >> english;
        cout << name << "\t" << chinese << "\t" << math << "\t" << english << "\t" << endl;
        ioFile >> name;
    }
    ioFile.close();
    return 0;
}
