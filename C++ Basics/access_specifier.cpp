#include <iostream>
using namespace std;

//by default class are Private

class test {
    public:
    int x;
    private:
    int y;
};

int main()
{
    test obj;
    obj.x = 2;
   // obj.y = 1;  //it will give error as its a private member
    cout << "x - " << obj.x << endl;
    // cout << "y - " << obj.y << endl;

    return 0;
}