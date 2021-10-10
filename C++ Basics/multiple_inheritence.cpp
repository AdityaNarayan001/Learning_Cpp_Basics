#include <iostream>
using namespace std;

// a child class can inherit from many main classes using comma(,)

class one {
    public:
    void msg_type_one(){
        cout << "First message \n";
    }
};

class two {
    public:
    void msg_type_two(){
        cout << "Second message \n";
    }
};

class Child : public one , public two {      //class child in inheriting from class one nad two

};

int main()
{
    Child myObj;
    myObj.msg_type_one();
    myObj.msg_type_two();
    return 0;
}