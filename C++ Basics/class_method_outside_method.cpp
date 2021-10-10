#include <iostream>
using namespace std;

// functions in class are called methods
// we access methods the same we way we access atributes

// :: scope resolution operator

class MyClass {
    public:
    void myMethod();
};

void MyClass::myMethod(){
    cout << "Hello World \n";
}

int main()
{
    MyClass myObj;
    myObj.myMethod();
    
    return 0;
}