#include <iostream>

// void initialization(double val, int val2) {

//     int x2 = val;    // if val == 7.9, x2 becomes 7 (bad)

//     char c2 = val2;  // if val2 == 1025, c2 becomes 1 (bad)

//     int x3{val};    // error: possible truncation (good)

//     char c3{val2};  // error: possible narrowing (good)

//     char c4{24};    // OK: 24 can be represented exactly as a char (good)

//     char c5{264};   // error (assuming 8-bit chars): 264 cannot be
//                     // represented as a char (good)

//     int x4{2.0};    // error: no double to int value conversion (good)
// }


class Class
{
public:
   Class()
   : m_privateMember(5)
   {};

   ~Class()
   {};

   friend class FriendClass; //define FriendClass to be friend

private:
   int m_privateMember; //private member variable

};

class FriendClass
{
public:
   void testAccess(const Class& testObj)
   {
      std::cout << testObj.m_privateMember << std::endl; //has access to private member of Class
   }
};



// void autoInitialization() {
//    auto a{5};           // int
//    auto b{5.4};         // double
//    auto c{Class()};     // Class
//    auto c = Class();    // Class
//    auto d;              // error
//    c = b;               // error


//    auto a{5};           // ok, aber schlechter lesbar
//    int e{5.5};          // int hier besser als auto, da Compiler einen Fehler wirft und mich schützt
//    auto b{Class()};     // preferierte Initalisierung
//    auto c = Class();    // nicht preferierte Initalisierung
//    auto d{b};           // Vermeiden, da schlechter lesbar
// }


int main()
{
   // initialization(1033.5, 1025);
   // autoInitialization();

   auto cls{Class()};
   auto bestFriend{FriendClass()};
   bestFriend.testAccess(cls);


   return 0;
}


