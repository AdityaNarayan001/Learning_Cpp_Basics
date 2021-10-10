#include <iostream>
using namespace std;

//Multilevel Inheritence

//main class
class boss {
    public:
     void msg() {
         cout << "I am boss \n";
     }
};

//child class
class child : public boss {
};

//grandchild class
class grandchild : public child {
};

int main()
{
    boss myObj;
    myObj.msg();
    return 0;
}