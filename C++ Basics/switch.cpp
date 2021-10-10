#include <iostream>
using namespace std;

int main()
{
    cout << "Learning Switch \n";
    
    //-------------------------------

    int num ;
    cout << "Enter number 1 , 2 or 3 :";
    cin >> num;

    switch (num){

        case 1:
        cout << "one";
        break;

        case 2:
        cout << "two";
        break;

        case 3:
        cout << "three";
        break;

        default:
        cout << "what do you want ?";

    }
    return 0;
}