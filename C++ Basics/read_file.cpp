#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    //Create a text file
    ofstream MyFile("filename.txt");

    //Write to the file
    MyFile << "Its is text file !!";

    //Close the file
    MyFile.close();

    //Create a text string to use as output the text file
    string myText;

    //Read from the file
    ifstream MyFile("filename.txt");

    //use a while loop with getline() to read line by line
    while (getline (MyFile, myText)){                              // whats this error
        cout << myText;
    }

    //close the file
    MyFile.close();
}