#include <iostream>
using namespace std;

class Car {
    public:
    int ManufactureYear;
    string Model;
    double engineCapacity;
};

int main()
{
    Car BMW;
    Car Mercedes;
    Car Renault;

    BMW.engineCapacity = 4.6;
    BMW.ManufactureYear = 2000;
    BMW.Model = "X5";

    Mercedes.Model = "G-Wagon";
    Mercedes.ManufactureYear = 1990;
    Mercedes.engineCapacity = 5.6;

    Renault.ManufactureYear = 2021;
    Renault.engineCapacity = 1;
    Renault.Model = "Kiger";

    cout << "BMW : " << BMW.Model << " , " << BMW.engineCapacity << " , " << BMW.ManufactureYear << endl;
    cout << "Mercedes : " << Mercedes.Model << " , " << Mercedes.engineCapacity << " , " << Mercedes.ManufactureYear << endl;
    cout << "Renault : " << Renault.Model << " , " << Renault.engineCapacity << " , " << Renault.ManufactureYear << endl;


    return 0 ;
}