#include <iostream>
using namespace std;

int main()
{
    char c = 'A';
    short int x;
    int a = 3;
    long int y;
    long long int myHugeInt = 10000000000000;
    float b = 85.3;
    string str = "My name is Aminour";
    double d = 65.564968498498;
    long double dd;
    bool boolian = true;

    cout << "The sizeof(char) is : " << sizeof(c) << " bytes" << endl;
    cout << "The sizeof(short int) is : " << sizeof(x) << " bytes" << endl;
    cout << "The sizeof(int) is : " << sizeof(a) << " bytes" << endl;
    cout << "The sizeof(long int) is : " << sizeof(y) << " bytes" << endl;
    cout << "The sizeof(long long int) is : " << sizeof(myHugeInt) << " bytes" << endl;
    cout << "The sizeof(float) is : " << sizeof(b) << " bytes" << endl;
    cout << "The sizeof(double) is : " << sizeof(d) << " bytes" << endl;
    cout << "The sizeof(long double) is : " << sizeof(dd) << " bytes" << endl;
    cout << "The sizeof(bool) is : " << sizeof(boolian) << " bytes" << endl;

    return 0;
}