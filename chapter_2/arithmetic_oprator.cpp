#include <iostream>
using namespace std;

int main()
{
    int a, b;
    float c;
    a = 5;
    b = 9;
    c = a + b;
    cout<<"Sum of "<<a<<" and "<<b<< " is " <<c<<endl;
    c= a -b;
    cout<<"substraction of "<<a<<" and "<<b<< " is " <<c<<endl;
    c = a*b;
    cout<<"Multiplication of "<<a<<" and "<<b<< " is " <<c<<endl;
    c = a/b;
    cout<<"Division of "<<a<<" and "<<b<< " is " <<c<<endl;
    c = a%b;
    cout<<"Reminder of "<<a<<" and "<<b<< " is " <<c<<endl;

    return 0;
}