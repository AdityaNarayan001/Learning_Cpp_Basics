#include <iostream>
using namespace std;

void display(int arr[3]) {
    cout << "Printing Numbers :- \n";

    for (int i = 0; i < 3; i++) {
        cout << "Number " << ": " << arr[i] <<endl;
    }
}

int main()
{
    int nums[3] = {1, 2, 3};
    int dots[3] = {0, 9, 8};

    display(nums);
    display(dots);

    return 0;
}