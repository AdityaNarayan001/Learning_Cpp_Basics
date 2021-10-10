#include <iostream>
using namespace std;

int main()
{
    //the type of pointer has to match type of variable
    // a pointer is a variable that stores the memory address

    string food = "Pizza";
    string* ptr = &food;

    int num = 22;
    int* num_ptr = &num;

    cout << food << endl;
    cout << ptr << endl;
    //cout << &food << endl;

    cout << num << endl;
    cout << num_ptr << endl;

    return 0;
}