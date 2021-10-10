#include <iostream>
using namespace std;

int main()
{
    int row,col;
    cout << "Array of how many rows : ";
    cin >> row;
    cout << "Array of how many columns : ";
    cin >> col;
    cout << "\n";

    int array[row][col];

    for(int i = 0; i < row; i++){
        for (int j =0; j < col; j++){
            cout << "Position : [" << i << "][" << j << "] = ";
            cin >> array[i][j];
        }
    }
cout << "\n";

    for (int l = 0; l < row; l++){
        for (int m = 0; m < col; m++){
            cout << "Array [" << l << "][" << m << "] = " << array[l][m] << endl;
        }
    }

    return 0;
}