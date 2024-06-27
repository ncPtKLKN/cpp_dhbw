#include <vector>
#include <list>
#include <iostream>
#include <string>
#include <algorithm>




void printVector(const std::vector<std::string>& vec)
{
   for (const std::string& item : vec)
   {
      std::cout << item << " ";
   }
   std::cout << std::endl;
}


void printList(const std::list<std::string>& inList)
{
   for (const std::string& item : inList)
   {
      std::cout << item << " ";
   }
   std::cout << std::endl;
}

//Template-Funktion zum Printen von Containern
template <class T>
void printContainer(const T& container)
{
   for (const std::string& item : container)
   {
      std::cout << item << " ";
   }
   std::cout << std::endl;
}

// Template-Klasse zum Printen von Containern
template <class T, char DIVIDER>
class ContainerPrinter
{
public:
   void print(const T& container) const
   {
      for (const std::string& item : container)
      {
         std::cout << item << DIVIDER;
      }
      std::cout << std::endl;
   }
};


int main()
{
   std::vector<std::string> myVec = {"Eier", "Schmalz", "Zucker", "Salz", "Milch", "Mehl"};
   // compiler deduces type
   printContainer(myVec);
   // explicit type is given
   printContainer<std::vector<std::string>>(myVec);

   std::list<std::string> myList = {"Eier", "Schmalz", "Zucker", "Salz", "Milch", "Mehl"};
   printContainer(myList);


   // Nutzung der Template-Klasse
   ContainerPrinter<std::vector<std::string>, ' '> vecPrinter;
   vecPrinter.print(myVec);
   ContainerPrinter<std::list<std::string>, ','> listPrinter;
   listPrinter.print(myList);

   return 0;
}