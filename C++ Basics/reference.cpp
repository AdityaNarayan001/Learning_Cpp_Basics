#include <iostream>
using namespace std;

int main()
{
    string food = "Pizza";   //when food will be printed it will give as meal that is Pizza
    string &meal = food;   //here we created reference to food with meal by using &
    cout << food << endl;
    cout << meal << endl;

    /*WE CAN ALSO USE REFERENCE TO FIND ADDRESS OF VARIBALE IN COMP. MEMORY*/

    string stuff = "Burger";
    cout << &stuff;    //gives stuff variable memory address
    return 0;
}