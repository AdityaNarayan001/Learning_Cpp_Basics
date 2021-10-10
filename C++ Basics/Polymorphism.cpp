#include <iostream>
using namespace std;

// Polymorphism
// We can now override a method in different clases

class Animal {
    public:
    void AnimalSound(){
        cout << "The animal makes a sound : \n";
    }
};

class Pig : public Animal {
    public:
    void AnimalSound(){                        //using same method name
        cout << "Pig says wee wee !! \n";
    }
};

class Dog : public Animal {
    public:
    void AnimalSound(){                      //      ""
        cout << "Dog says boo boo !! \n";
    }
};

int main()
{
    Animal myAnimal;
    Pig myPig;
    Dog myDog;

    myAnimal.AnimalSound();
    myPig.AnimalSound();
    myDog.AnimalSound();

    return 0;
}