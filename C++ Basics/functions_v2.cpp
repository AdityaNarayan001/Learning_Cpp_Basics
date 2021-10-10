#include <iostream>
using namespace std;

//using parameters and arguments

void namePrinter(string name){
    cout << "Hi " << name << endl;
}

//Default Parameters

void country(string countryName = "India") {     // here India is default parameter when no name will be called in function then india will be called
    cout << countryName << " is a country. \n";
}

// a function can take multiple parameters

void multiPara(string user, int age) {
    cout << "You are " << user << " and your age is " << age << endl;
}

int main(){
    namePrinter("Harry");
    namePrinter("Sam");

    country("Sweden");
    country();
    country("USA");
    
    multiPara("Jordan", 21);
    multiPara("Alex", 23);

    return 0;
}