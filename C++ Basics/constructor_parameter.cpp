#include <iostream>
using namespace std;

// we can aso have parameters in constructors

class Car {
    public:

    Car(string brand, string model, int year){
        cout << "Details >> " << "Brand - " << brand << " / Model - " << model << " / Year - " << year <<endl;
    }
};

int main()
{
    Car obj1("BMW", "X5", 2000);
    Car obj2("Audi", "Q5", 2006);

}