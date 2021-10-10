#include <iostream>
using namespace std;

int main()
{
    //Print fibonacci series.

    int n1=0,n2=1,n3=0;
    cout << "Enter number of Fibonacci Terms you want : ";
    int num;
    cin >> num;

    int i = 0;
    while(i<num){
        cout << n3 << ", " ;
        n3 = n1+n2;
        n1 = n2;
        n2 = n3;
        i++;
    }
    return 0;
}