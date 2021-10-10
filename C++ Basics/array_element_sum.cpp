#include <iostream>
using namespace std;

int main()
{
    double nums[10] = {2, 4, 5, 7, 1, 8, 9, 19, 22, 11.92};

    double sum;
    
    for (int i = 1; i < 11; i++){
        sum += nums[i-1];
    }
    cout << "Sum of Array is : " << sum << endl;
    cout << "Elements in Array : " << sizeof(nums)/sizeof(nums[0]);
    return 0;
}