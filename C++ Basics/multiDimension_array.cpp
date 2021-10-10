#include <iostream>
using namespace std;

int main()
{
    //MultiDimension Array
    //2D array
    int x[3][4] = { {1, 2, 3, 4}, {5, 7, 8, 2}, {6, 2, 5, 0} };
    //cout << x[2][3];

    //printing 2-D Arrays

    for (int i=0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            cout << "2-D Array" << "[" << i << "]" << "[" << j << "] " << " = " << x[i][j] << endl;
        }
    }

    // 3D Array
    int y[2][3][2] = {
        { {1,2}, {2,4}, {5,6}},
        { {7,8}, {9,10}, {11,12}}
        };

    //printing 3D Array

cout << "\n";

    for (int a = 0; a < 2; a++){
        for (int b = 0; b < 3; b++){
            for (int c = 0; c < 2; c++){
                cout << "3-D Array" << "[" << a << "]" << "[" << b << "]" << "[" << c << "]" << " = " << y[a][b][c] << endl;
            }
        }
    }

    return 0;
}