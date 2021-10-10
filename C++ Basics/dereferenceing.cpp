#include <iostream>
using namespace std;

int main()
{
    string food = "Pizza";
    string* ptr = &food;

    cout << ptr << endl;    //gives memory address
    cout << *ptr << endl;   // it gives the value at that address
    return 0;
}