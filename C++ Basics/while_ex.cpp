#include <iostream>
using namespace std;

int main()
{
    //adds the number and results when negative num is entered
    
    cout << "Enter Number to sum : ";
    int num, sum ;
    cin >> num;
    sum = 0;
    while(num >=0){
        sum += num;

        cout << "Enter Number to sum : ";
        cin >> num;
    }

    cout << "The sum is --> " << sum;

    return 0;
}