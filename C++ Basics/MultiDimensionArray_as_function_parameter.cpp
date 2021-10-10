#include <iostream>
using namespace std;

void MultiAray(int arr[3][2]){
    cout << "Numbers : \n";

    for (int i = 0; i < 3; i++){
        for (int j =0; j < 2; j++){
            cout << "Number Position [" << i << "][" << j << "] : " << arr[i][j] << endl;
        }
    }
}

int main()
{
    int coordinate[3][2] = {
        {2, 7},
        {8, 5},
        {9, 0}
    };

    MultiAray(coordinate);
    
    return 0;
}