#include <iostream>
using namespace std;

int main()
{
    try {
        cout << "Enter your Age : ";
        int age;
        cin >> age;
        if (age>18){
            cout << "You are eligible \n";
        } else {
            throw 0;
        }
    }

    catch(...){
        cout << "Access denied - You must be above 18 !";
    }
    return 0;
}