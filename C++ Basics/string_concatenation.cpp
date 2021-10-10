#include <iostream>
using namespace std;

int main()
{
    string firstName = "Harry ";
    string secondName = "Potter";
    string fullName = firstName + " " + secondName;
    cout << fullName << endl;

    fullName = firstName.append(secondName);
    cout << fullName <<endl;

    int x=10, y=20;
    int sum = x+y;
    cout << sum << endl;

    string a="10", b="20";
    cout << a+b << endl;
    return 0;
}