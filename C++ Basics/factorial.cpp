#include <iostream>
using namespace std;

int main()
{
    //finding factorial
    
    cout << "Enter the Number to find factorial of : ";
    int num, factorial;
    cin >> num;
    factorial = 1;
    for(int i = 1; i <= num; i++){
        factorial = factorial*i;
    }
    cout << "The factorial is -> " << factorial;
    return 0;
}