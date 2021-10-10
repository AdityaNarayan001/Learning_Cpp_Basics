#include <iostream>
using namespace std;

int main()
{
    //Take input from user and store in a array.
    // array size 5

    string name[5];

    for (int i = 1; i < 6; i++){
        cout << "Enter " << i << "# Name :- ";
        cin >> name[i-1];
    }

    //printing the array
    cout << "Names are : ";
    for (int x = 1; x < 6; x++){
        cout  << name[x-1] << " ";
    }

    return 0;
}