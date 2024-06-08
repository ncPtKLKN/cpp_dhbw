#include <string>
#include <iostream>
#include <vector>

using std::string;
using std::cout;

class User
{
public:
   User()
   {};

   User(const string name)
   : m_name{name}
   {
      m_id = nextID;
      nextID++;
   };

   void printInfo() const
   {
      cout << "Name: " << m_name << std::endl;
      cout << "ID: " << m_id << std::endl;
   }

private:
   string m_name;
   int m_id;

   static int nextID;
};

int User::nextID = 1;

int main()
{
   std::vector<User> myUser;
   myUser.push_back(User("Hans"));
   myUser.push_back(User("Peter"));
   myUser.push_back(User("Ulli"));

   for (auto& user : myUser)
   {
      user.printInfo();
   }

   return 0;
}