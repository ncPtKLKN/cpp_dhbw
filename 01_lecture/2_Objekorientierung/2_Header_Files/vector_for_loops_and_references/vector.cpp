#include <vector>
#include <iostream>

int main()
{
   std::vector<std::string> vec;
   vec.push_back("Hello ");
   vec.push_back("World ");
   vec.push_back("!!");


   vec.resize(7);

   vec.pop_back(); // entfernt das letzte element
   vec.erase(vec.begin() + 2); // Entfernt Element an Position 2

   std::cout << vec.at(1) << std::endl; //Greift auf element 1 zu

   for (std::string& word : vec)
   {
      if (word.empty())
      {
         std::cout << " (leer) ";
      }
      else
      {
         std::cout << word;
      }
   }

   return 0;
}