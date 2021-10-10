#include <iostream>
using namespace std;

struct Person
{
    string name;
    int age;
};

void Display(Person);

int main()
{
    Person one;
    cout << "Enter Name : ";
    getline(cin, one.name);
    cout << "Enter Age : ";
    cin >> one.age;

    Display(one);

    return 0;
}

void Display(Person one){
    cout << "Name : " << one.name << endl;
    cout << "Age : " << one.age << endl;
}