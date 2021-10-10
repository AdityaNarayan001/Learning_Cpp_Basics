#include <iostream>
using namespace std;

//a class is a user defined data type

//made a class

class MyClass {         //The class
    public:             //Access specifier
    int myNum;          //Attribute
    string myString;    //Attribute
};


int main()
{
    MyClass myObj;   // Created  a object of Class(MyClass)

    // Access attributes and set values

    myObj.myNum = 15;
    myObj.myString = "Some Text";

    //Printing attribute values

    cout << myObj.myNum << endl;
    cout << myObj.myString << endl;

    return 0;
}