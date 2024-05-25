#include <iostream>
#include <string>

using namespace std;


class Person
{
public:
   Person(string name, string address, string email)
   : m_name(name)
   , m_address(address)
   , m_email(email)
   {}

   string getName()
   {
      return m_name;
   }

protected:
   string m_name;
   string m_address;
   string m_email;
};


class Professor : public Person
{
private:
   string m_iban;
};


class Student : public Person
{
private:
   double m_averageGrade;
};


class MailHandler
{
public:
   void writeMail(Person receiver, string mailText)
   {
      cout << "Writing Mail to: " << receiver.getName() << endl;
      cout << "Text: " << endl;
      cout << mailText << endl;
   }
};


int main()
{
   Person Frank("Frank", "Hellweg 3", "frank@web.de");
   MailHandler myMailHandler;
   myMailHandler.writeMail(Frank, "Hallo Frank, wie geht es dir?");

   return 0;
}

