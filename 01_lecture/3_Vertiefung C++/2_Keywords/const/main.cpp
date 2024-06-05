#include <iostream>



class MyClass
{
public:
   void setMyValue(int value)
   {
      m_value = value;
   }

   void constMethod() const
   {
      std::cout << "constMethod" << std::endl;
   }

   void myMethod(const MyClass& inputClass) const
   {
      inputClass = MyClass{};      // does not work, since inputClass is const
      inputClass.setMyValue();  // does not work since inputClass is const
      this->m_value = 0;  // does not work, since myMethod is const
      inputClass.constMethod();  // works
   }


private:
   int m_value;
};

int main()
{
   // Pi must be used in the project with the same accuracy
   const double PI = 3.14159;

   // PI = 3.1415; // ERROR!
   std::cout << PI << std::endl;
   
   // const always refers to instance left to it. If there is nothing to the left, then to the right.
   const MyClass* myMyClass1;           // const points to MyClass, so instance is constant
   //myMyClass1->setMyValue(3);    // ERROR

   MyClass const* myMyClass2;           // identical to statement above, should not be written this way
   MyClass* const myMyClass3();         // const points to the pointer *, so the pointer is constant, not the instance
   const MyClass* const myMyClass4();   // both, pointer and instance are constant

   return 0;
}

class ConstExample
{
public:
   ConstExample(const int var1)
   : m_var1(var1)
   {
   }

private:
   const int m_var1;
   const int m_var2 = 0;
};
