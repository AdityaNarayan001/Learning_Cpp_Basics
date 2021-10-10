#include <iostream>
using namespace std;

//structure is collection of variables wrapped in a packet
//stryct keyword is used to declare variables

struct Person            //not a class
    {
        string name;
        int age;
        string place;
        float salary;
    };

int main()
{
    Person one;

    cout << "Enter your name :- ";
    getline(cin, one.name);
    cout << "Enter age :- ";
    cin >> one.age;
    cout << "Your palce :- ";
    cin >> one.place;
    cout << "Your salary :- ";
    cin >> one.salary;

    cout << "Name : " <<one.name<< endl;
    cout << "Age : " <<one.age<< endl;
    cout << "Place : " <<one.place<< endl;
    cout << "Salary : " <<one.salary<< endl;

    return 0;
}