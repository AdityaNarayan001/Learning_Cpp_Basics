#include <iostream>
using namespace std;

int main()
{
    string txt = "ABCDEFGHIJKALMNOPQRSTUVWXYZ";
    cout << txt.size()<<"\n";
    //or
    cout << txt.length() << endl;
    
    int num = txt.size();
    cout << num;
    return 0;
}
