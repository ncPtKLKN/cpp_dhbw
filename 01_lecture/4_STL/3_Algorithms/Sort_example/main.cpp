#include <vector>
#include <string>
#include <iostream>
#include <algorithm>


using std::string;
using std::cout;

bool wayToSort(string s, string b)
{
   return (s.length() < b.length());
}


void printContainer(std::vector<string> container)
{
   // range-based-for loop
   for (string& str : container)
   {
      cout << str << " ";
   }
   cout << std::endl;
}


int main()
{

   std::vector<string> myContainer;
   myContainer = {"Helloo", ",,", "World", "!"};

   printContainer(myContainer);

   std::sort(myContainer.begin(), myContainer.end(), wayToSort);

   printContainer(myContainer);

   return 0;
}