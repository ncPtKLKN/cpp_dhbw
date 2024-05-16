#ifndef CODING_GUIDELINES_HPP_INCLUDED
#define CODING_GUIDELINES_HPP_INCLUDED

namespace ServiceFunctions
{

enum class ServiceTypes
{
   serviceA,   // Short inline description of serviceA
   serviceB,   // Short inline description of serviceB
   serviceC    // Short inline description of serviceC
};

/// This is a short description of the following class.
///
/// This is a more detailed description of the class.
/// Should include high-level description and motivation.
/// Usage code examples can also help.
class ServiceClass
{
public:
   ServiceClass(const int counter1, const int counter2)
   : m_counter1{counter1}
   , m_counter2{counter2}
   {
   }

   /// Description of method
   /// Trivial getter and setter methods can be implemented in hpp
   int getServiceBValue() const
   {
      return static_cast<int>(ServiceTypes::serviceB);
   }

   /// Description of method
   /// \param [in] param1 Description of param1
   /// \param [in] param2 Description of param2
   /// \return int Description of return value
   int start(const int param1, const int param2);

private:
   int m_counter1;      // short inline description of member
   int m_counter2;      // NOT: int m_counter1, m_counter2
   static int counter3; // short inline description of member
};

}  // end namespace ServiceFunctions

#endif // CODING_GUIDELINES_HPP_INCLUDED
