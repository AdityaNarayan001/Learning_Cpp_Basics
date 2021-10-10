#include <iostream>
using namespace std;

int main()
{
    //& operator can be used to create reference and it can be used to get memeory address
    string food = "Pizza";
    cout << food << endl;
    cout << "Memory Address : " << &food;
    return 0;
}