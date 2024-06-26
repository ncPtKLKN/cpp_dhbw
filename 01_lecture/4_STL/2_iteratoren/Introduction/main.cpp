#include <vector>
#include <string>
#include <iostream>
#include <algorithm>


using std::string;
using std::cout;


void printHelper(string str)
{
   cout << str;
}


int main()
{

   std::vector<string> myContainer;
   myContainer = {"Hello", ", ", "World", "!"};



   // range-based-for loop
   for (string& str : myContainer)
   {
      cout << str;
   }
   cout << std::endl;



   // iterator-based loop
   for (auto it = myContainer.begin(); it < myContainer.end(); it++)
   {
      // Iterator must be treated like a pointer
      cout << *it;
   }
   cout << std::endl;



   // for_each loops
   std::for_each(myContainer.begin(), myContainer.end(), printHelper);
   cout << std::endl;

   return 0;
}