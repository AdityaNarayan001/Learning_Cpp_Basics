#include <iostream>
using namespace std;

int main()
{
    // if , if-else , else if
    int age;
    cout << "Enter your age : ";
    cin >> age;

    if(age<=18){
        cout << "You are young";
    }
    else if(age>18 and age<35){
        cout << "You are Grown up";
    }
    else{
        cout << "You are old";
    }
    return 0;
}