#include <iostream>
#include <limits>
using namespace std;

int main()
{
    cout << "The minimum limit of int data type : " << numeric_limits <int>::min() << endl;
    cout << "The maximum limit of int data type : " << numeric_limits<int>::max() << endl;
    cout << "The maximum limit of unsigned int data type : " << numeric_limits<unsigned int>::max() << endl;
    cout << "The maximum limit of long long int data type : " << numeric_limits<long long>::max() << endl;
    cout << "The minimum limit of long long int data type : " << numeric_limits<long long>::min() << endl;
    cout << "The maximum limit of unsighed long long data type : " << numeric_limits<unsigned long long>::max() << endl;
    cout << "The maximum limit of char data type : " << numeric_limits<char>::max() << endl;
    cout << "The Bits contain in char data type : "<< sizeof(char)*8<<endl;
    return 0;
}