#include <iostream>
using namespace std;

//A class can inherit sclass member of other class
// derived class is the class that ingerits from another class
// base class is a class being inherited from

//Base class

class Vehicle {
    public:
    string brand = "Ford";
    void honk(){
        cout << "Tuut , tuut ! \n";
    }
};

//derived class ****

class Car : public Vehicle {
    public: 
    string model = "Mustang";

};

int main()
{
    Car myObj;
    myObj.honk();
    cout << myObj.brand << " " << myObj.model;
    
    return 0;
}