#include <iostream>
using namespace std;

int main()
{
    // Multiplication table
    
    cout << "Enter the number whose Table you want --> ";
    int num;
    cin >> num;
    for (int i = 1; i<=10; i++){
        cout << num << " x " << i << " = " << num*i << endl;
    }
    return 0;
}