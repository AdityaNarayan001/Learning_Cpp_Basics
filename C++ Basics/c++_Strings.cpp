#include <iostream>
using namespace std;

//to read blank space or white space use cin.get(array_name, array length)...........for char entry only

int main()
{
    /*
    char name[100];
    for (int i = 0; i < 100; i++){
        cout << "Enter Name : \n";
        cin.get(name, 100);
    }
    */
//For taking string from user************************************************

string x;
cout << "Enter a quote : ";
 getline(cin, x);

 cout << "The quote is : " << x;


    return 0;
}