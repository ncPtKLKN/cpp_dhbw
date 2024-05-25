#include <iostream>
#include <string>


class Person
{
public:
   Person(std::string name, std::string address, std::string email)
   : m_name(name)
   , m_address(address)
   , m_email(email)
   {}

   std::string getName()
   {
      return m_name;
   }

protected:
   std::string m_name;
   std::string m_address;
   std::string m_email;
};


class Professor : public Person
{
private:
   std::string m_iban;
};


class Student : public Person
{
private:
   double m_averageGrade;
};


class MailHandler
{
public:
   void writeMail(Person receiver, std::string mailText)
   {
      std::cout << "Writing Mail to: " << receiver.getName() << std::endl;
      std::cout << "Text: " << std::endl;
      std::cout << mailText << std::endl;
   }
};


int main()
{
   Person Frank("Frank", "Hellweg 3", "frank@web.de");
   MailHandler myMailHandler;
   myMailHandler.writeMail(Frank, "Hallo Frank, wie geht es dir?");

   return 0;
}

