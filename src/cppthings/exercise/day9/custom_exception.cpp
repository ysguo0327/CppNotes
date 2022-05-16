#include <iostream>
using namespace std;

class BasicException
{
public:
    char *Where()
    {
        return "BasicException";
    }
};

class FileSystemException : public BasicException
{
public:
    char *Where()
    {
        return "FileSystemException";
    }
};

class FileNotFoundException : public FileSystemException
{

public:
    char *Where()
    {
        return "FileNotFoundException";
    }
};

class DiskNotFoundException : public FileSystemException
{
public:
    char *Where()
    {
        return "DiskNotFoundException";
    }
};

int main(int argc, char const *argv[])
{
    try
    {
        throw FileSystemException();
    }
    catch (DiskNotFoundException p)
    {
        cout << p.Where() << endl;
    }
    catch (FileNotFoundException p)
    {
        cout << p.Where() << endl;
    }
    catch (FileSystemException p)
    {
        cout << p.Where() << endl;
    }
    catch (BasicException p)
    {
        cout << p.Where() << endl;
    }
    try
    {
        throw DiskNotFoundException();
    }
    catch (DiskNotFoundException p)
    {
        cout << p.Where() << endl;
    }
    catch (FileNotFoundException p)
    {
        cout << p.Where() << endl;
    }
    catch (FileSystemException p)
    {
        cout << p.Where() << endl;
    }
    catch (BasicException p)
    {
        cout << p.Where() << endl;
    }
    return 0;
}
