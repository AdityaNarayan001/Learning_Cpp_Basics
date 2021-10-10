#include <iostream>
using namespace std;

// functions in class are called methods
// we access methods the same we way we access atributes

class MyClass {
    public:

    void myMethod(){
        cout << "Hello World \n";
    }
};

int main()
{
    MyClass myObj;

    myObj.myMethod();
    
    return 0;
}