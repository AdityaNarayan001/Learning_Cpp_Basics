#include <iostream>
using namespace std;

/* With function overloading we can use multiple function with same name but different parameters */

void sum(int x, int y){
    cout << "Sum :- " << x+y << endl;
}

void sum(double x, double y){
    cout << "Sum :- " << x+y << endl;
}

void sum(string x){
    cout << "hi " << x;
}

int main()
{
    sum(2, 3);
    sum(2.33, 3.00);
    sum("Ethan");
    return 0;
}