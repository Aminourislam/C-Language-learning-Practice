#include <iostream>
using namespace std;
// Global varable
int x = 20;
void fun()
{
    int y = 23;
    cout << "printing global variable x = " << x << endl;
}

int main()
{
    cout << "Tutorial 4" << endl;
    int a = 3;
    float b = 85.3;
    char c = 'A';
    string str = "My name is Aminour";
    double d = 65.564968498498;
    long long int myHugeInt = 10000000000000 ;
    bool boolian = true;

    cout << "a = " << a << endl
         << "b = " << b << endl
         << "c = " << c << endl
         << "str = " << str << endl
         << "Boolian = " << boolian << endl
         << "d = " << d << endl
         << "My Huge int = " << myHugeInt << endl;

    fun();
    // local variable
    x = 22;
    cout << "printing local variable x = " << x;

    return 0;
}