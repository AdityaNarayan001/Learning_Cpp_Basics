#include <iostream>
using namespace std;

int main()
{
    //sum of n natural numbers
    
    cout << "Enter value of 'n' : ";
    int num , sum;
    cin >> num;
    sum = 0;
    for(int i = 1; i <= num; i++){
        sum += i; 
    }
    cout << "The sum of " << num << " Natural Number is : " << sum;
    return 0;
}