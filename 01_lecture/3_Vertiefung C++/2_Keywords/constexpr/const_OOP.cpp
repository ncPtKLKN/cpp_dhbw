#include <iostream>

class MyClass
{
public:
    MyClass() : m_value(0)
    {
        std::cout << "MyClass() constructor" << std::endl;
    }

    ~MyClass()
    {
        std::cout << "~MyClass() destructor" << std::endl;
    }

    void setMyValue(int value)
    {
        std::cout << "I will set the value to " << value << std::endl;
        m_value = value;
    }

    void myMethod2(MyClass &inputClass)
    {
        inputClass = MyClass{};               // Zuweisung nicht möglich, wenn inputClass const ist
        inputClass.methodThatChangesMemers(); // Methodenaufrauf nicht möglich, wenn inputClass const ist
        m_value = 10;                         // Zuweisung nicht möglich, wenn myMethod2 const ist
        this->m_value = 20;                   // Zuweisung nicht möglich, wemm myMethod2 const ist
        inputClass.constMethod();             // Aufruf möglich
        inputClass.printValue();              // Aufruf möglich
    }

private:
    int m_value;

    void methodThatChangesMemers()
    {
        m_value = 0;
    }

    void constMethod()
    {
        std::cout << "constMethod" << std::endl;
    }

    void printValue()
    {
        std::cout << "m_value = " << m_value << std::endl;
    }
};

// int main()
// {
//     MyClass myClass;
//     myClass.myMethod2(myClass);
//     myClass.setMyValue(5);

//     return 0;
// }

// Welche Methoden und Varibalen sollten mit dem keyword const versehen werden?
// - Methoden, die keine Member-Variablen verändern, sollten mit const versehen werden
// - Methoden, die Member-Variablen verändern, sollten nicht mit const versehen werden
// - Member-Variablen, die nicht verändert werden sollen, sollten mit const versehen werden
// - Member-Variablen, die verändert werden sollen, sollten nicht mit const versehen werden