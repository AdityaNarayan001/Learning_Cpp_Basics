#include <iostream>
using namespace std;
 
//Fibonacci series by using recursion 

int fib(int n){                               
    if (n<2){
        return 1;
    } else {
        return fib(n-2) + fib(n-1);
    }
}

int main()
{
    int a;
    cout << "Enter num : ";
    cin >> a;
    cout << "Fibonacci sequence at term " << a << " is " << fib(a);
    return 0;
}

// Recursion is not always the fastest option, when entering a larger number iteration takes way less time than recursion