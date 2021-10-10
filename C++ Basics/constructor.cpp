#include <iostream>
using namespace std;

//constructors have same name as class and they are caleld with the object

void num(){
    cout << "I am  a Method :)";
}

class Hello {
    public:

    Hello() {    //constructor
        cout << "Hello World ! \n";

        num();  // calling a outside function in a constructor we can also make inside function or method
    }
};

int main()
{
    Hello myObj;

    return 0;
}