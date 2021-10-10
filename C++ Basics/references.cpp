#include <iostream>
using namespace std;

int main()
{
    string food = "Pizaa";  // food variable
    string &meal = food;    // reference to food

    cout << food << endl;
    cout << meal << endl;
    
    return 0;
}