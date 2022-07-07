#include <iostream>
using namespace std;

int main() 
{
    int a = 3;
    int b = 5;

    cout 
        << "a = "
        << a
        << ", b = "
        << b 
        << endl;
    a += b;
    b = a - b;
    a -= b;
    cout 
        << "a = "
        << a
        << ", b = "
        << b 
        << endl;
    return 0; 
}