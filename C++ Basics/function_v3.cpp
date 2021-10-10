#include <iostream>
using namespace std;

// using function with return types
// void does not return anything

int sum(int x=0, int y=0) {
    return x + y;
}

int main(){
    cout << sum() << endl;    //here we have not used ; with sum()
    cout << sum(2, 3);      //we need to use cout to get return value because by using return value is saved in function

    return 0;
}