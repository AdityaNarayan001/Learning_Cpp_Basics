#include <iostream>
using namespace std;

void swap(int x, int y){
    int z;
    z = x;
    x = y;
    y = z;
    cout << x <<" , "<< y << endl;
}

int main(){
    swap(10, 20);
    swap(22,17);
    return 0;
}