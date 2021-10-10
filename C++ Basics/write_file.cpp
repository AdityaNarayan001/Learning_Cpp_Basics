#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    //create and open a file
    ofstream MyFile("filename.txt");

    //write to he file
    MyFile << "Files can tricky , but it is fun though !";

    //close the file
    MyFile.close();
}