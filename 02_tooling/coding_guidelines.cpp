#include "coding_guidelines.hpp"

namespace ServiceFunctions
{


int ServiceClass::start(const int param1, const int param2) // Class name
{
   ServiceClass* pointerToObject;     // NOT: ServiceClass *pointerToObject
   int x = param1 + 3;                // NOT: int x=param1+3

   if (param1 != param2)              // NOT: if ( param1 != param2 ) 
   {                                  // NOT: if(...), if (param1!=param2)
      // ...
   }

   for (int i = 0; i < param1; i++)    // NOT: for(...), for (int i=0;i<param1;i++)
   {
      // ...
   }

   // This is a comment which spans over more than one line.
   // Here comes the second line. /* is not used for this.
   return param1 + param2;
}

int ServiceClass::counter3 = 42;

}  // end namespace ServiceFunctions
