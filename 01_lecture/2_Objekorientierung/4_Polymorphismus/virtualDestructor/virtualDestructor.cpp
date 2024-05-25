#include <iostream>
#include <memory>

using namespace std;

class Base
{
public:
    Base(){
        cout << "Base Constructor Called\n";
    }
    virtual ~Base(){
        cout << "Base Destructor called\n";
    }
};

class Derived1: public Base
{
public:
    Derived1(){
        dynamicArray = new int[100000];
        cout << "Derived1 constructor called " << dynamicArray[10] << std::endl;
    }
    ~Derived1(){
        cout << "Derived1 destructor called " << dynamicArray[10] << std::endl;
        delete [] dynamicArray;
    }
private:
    int *dynamicArray;
};


int main()
{

    //Base *b = new Derived1();
    //delete b;

    for (int i = 0; i < 10000; i++)
    {
        Base *b = new Derived1();
        delete b;
    }

    std::string input;
    std::cout << "Enter Key to finish . . .";
    std::cin >> input;
}




