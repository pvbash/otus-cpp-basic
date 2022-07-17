#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int swap(int a, int b)
{
    return a > b ? a : b;
}


int main() 
{
    int a = 10;
    int b = 20;
    
    cout << swap(a+= b, b) << endl;

    return 0; 
}