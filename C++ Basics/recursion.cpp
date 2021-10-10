#include <iostream>
using namespace std;

//factorial using recursion    [n!=n * (n-1)!]

                                        //Step by step calculation of factorial(4) by using recursion
int factorial(int n){                   //factorial(4) = 4 * factorial(3)
    if(n<=1){                           //factorial(4) = 4 * 3 * factorial(2)
        return 1;                       //factorial(4) = 4 * 3 * 2 * factorial(1) ---- here factorial automatically gives 1 as per if condition
    }                                   //factorila(4) = 4 * 3 * 2 * 1
    return n * factorial(n-1);          //factorial(4) = 24
}  

int main()
{
    int a;
    cout << "Enter a number :- " << endl;
    cin >> a;
    cout << "The factorial of " << a << " is " << factorial(a) << endl;
    return 0;
}