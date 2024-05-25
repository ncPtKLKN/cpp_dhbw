int main()
{
   double x;
   double* ptr_x = &x;           // ptr_x gets the address of x
   double& reference_to_x = x;   // reference_to_x is an alias for x, both are identical
   x = 0.0;                      // x = 0.0, reference_to_x = 0.0
   reference_to_x = 1.3;         // x = 1.3, reference_ti_x = 1.3

   double* ptr = new double;        // reserve memory for pointer (on heap)
   delete ptr;                      // free reserved memory
   ptr = nullptr;                   // set ptr to NULL

   ptr = new double(7.0);           // reserve memory for pointer and set value to 7.0
   delete ptr;

   return 0;
}

