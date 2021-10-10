#include <iostream>
using namespace std;

int main()
{
    string name = "Harry";
    cout << name[0] <<endl;
    cout << name[2] << endl;
    name[0] = 'M'; // for adding use single quote
    cout << name;
    return 0;
}