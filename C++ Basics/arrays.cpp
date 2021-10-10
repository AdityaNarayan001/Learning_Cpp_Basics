#include <iostream>
using namespace std;

int main()
{
    string cars[4] = {"Audi", "BMW", "Lamborghini", "Buggati"};
    cout << cars[2] << endl;           //printing array element by index number

    for(int i = 0; i<4; i++){         //printing array using iteration
        cout << cars[i] << " , ";
    }

    int nums[3] = {1, 2, 3};
    cout << "\n";
    cout << nums[1] <<endl;

    cout << sizeof(nums)/4 << endl;                     //int occupies 4-bit 
    cout << sizeof(cars)/sizeof(cars[0]) << endl;      // string occupies 24-bit

    //changing an Array Element

    cout << cars[0] << endl;      //older 0th element
    cars[0] = "Mercedes";
    cout << cars[0] << endl;      //updated 0th element

    //Array without size specified

    string bmw[] = {"X1", "X5", "M40i"};
    cout << sizeof(bmw)/24 << endl;
    cout << bmw[2] << endl;
    //bmw[3] = "Alpine";
    //cout << sizeof(bmw)/24 << endl;
    //cout << bmw[3];


    return 0;
}