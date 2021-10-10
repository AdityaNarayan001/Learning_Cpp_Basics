#include <iostream>
using namespace std;

//using protected access specifier

//create a class which is protected 
//inherit its data in child class
//then use set and fet function

//Protected items can be accessed in its class or any other class which inherited that class.

//Base class
class Employee {
    protected:
    int salary;
};

class Programmer : protected Employee {
    public:

    int bonus;
                                          //there is no need to use get and set here because salary is accessible in programmer class
    void setSalary(int s){
        salary = s;
    }

    int getSalary(){
        return salary;
    }
};

int main()
{
    Programmer myObj;
    myObj.setSalary(50000);
    myObj.bonus = 150000;
    cout << "Salary :- " << myObj.getSalary() << endl;
    cout << "Bonus :- " << myObj.bonus << endl;
}