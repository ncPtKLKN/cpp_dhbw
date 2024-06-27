#include <vector>
#include <list>
#include <iostream>
#include <string>
#include <algorithm>

#include <vector>
#include <list>
#include <iostream>
#include <string>
#include <algorithm>

void printString(std::string str)
{
   std::cout << str << " ";
}

void printVector(std::vector<std::string> vec)
{
   for_each(vec.begin(), vec.end(), printString);
   std::cout << std::endl;
}

bool wayToSort_string(std::string a, std::string b)
{
   return a.length() > b.length();
}

bool wayToCount_string(std::string a)
{
   return a[0] == 'S';
}



void manipulateVector()
{
   //Vector mit Zutaten
   std::vector<std::string> vec = {"Eier", "Schmalz", "Zucker", "Salz", "Milch", "Mehl"};
   printVector(vec);

   //Dritte Zutat entfernen
   vec.erase(vec.begin() + 2);
   printVector(vec);

   //Zutat Schokolade hinzufügen
   vec.push_back("Schokolade");
   printVector(vec);

   //Letztes Element ersetzen
   vec.back() = "Schmalz";
   printVector(vec);

   //Zutat Zucker entfernen mit erase und find
   vec.erase(std::find(vec.begin(), vec.end(), "Zucker"));
   printVector(vec);

   //Zutaten sortieren nach Länge der Strings
   std::sort(vec.begin(), vec.end(), wayToSort_string);
   printVector(vec);


   ///////////////////////////////////////////////
   //Zusatzaufgaben

   //Reihenfolge der Zutaten umkehren
   std::reverse(vec.begin(), vec.end());
   printVector(vec);

   //Anzahl der Zutaten, die mit S anfange ausgeben
   auto count = std::count_if(vec.begin(), vec.end(), wayToCount_string);
   std::cout << count << std::endl;

   //Entferne alle doppelten Zutaten mit unique
   vec.erase(std::unique(vec.begin(), vec.end()), vec.end());
   printVector(vec);


   //Alle Elemetne in Großbuchstaben umwandeln using std::for_each
   std::for_each(vec.begin(), vec.end(), [](std::string& str) {
      std::transform(str.begin(), str.end(), str.begin(), ::toupper);
   });
   printVector(vec);

   std::cout << std::endl;


}








int main()
{
   manipulateVector();
   return 0;
}

