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
    double d = 65.564968498498;

    cout << "a = " << a << endl
         << "b = " << b << endl
         << "c = " << c << endl
         << "d = " << d << endl;

    fun();
    // local variable
    x = 22;
    cout << "printing local variable x = " << x;

    return 0;
}