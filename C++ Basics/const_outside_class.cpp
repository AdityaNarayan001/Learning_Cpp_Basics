#include <iostream>
using namespace std;

class Car {
    public:

    string brand;
    string model;
    int year;

    Car(string x , string y , int z);   // constructor declaration
};

//constructor definition outside class
Car::Car(string x , string y , int z) {
    brand = x;
    model = y;
    year = z;
}

int main()
{
    Car obj1("BMW", "X5", 2020);
    Car obj2("Mercedes", "C63 AMG", 2021);

    cout << obj1.brand << " " << obj1.model << " " << obj1.year << endl;
    cout << obj2.brand << " " << obj2.model << " " << obj2.year << endl;

    return 0;
}