#include <iostream>
using namespace std;

int main()
{
    // find LCM of two numbers

    int numOne, numTwo;
    cout << "Enter 1st number : ";
    cin >> numOne;
    cout << "Enter 2nd number : ";
    cin >> numTwo;

    int largeNum = max(numOne, numTwo);
    int smallNum = min(numOne,numTwo);
    
    if(largeNum % smallNum == 0){
        cout << "LCM is : " << largeNum ;
    } else {
        for(int i = 2; i > 0; i++){
            int checkNum = largeNum * i;
            if(checkNum % smallNum == 0){
                cout << "LCM is : " << checkNum;
                break;
            } else {
                continue;
            }
            break;
        }
    }

    return 0;
}