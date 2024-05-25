
int main()
{
   SomeBigObject x;
   foo(x)

   return 0;
}

void foo(SomeBigObject x)
{
   // do something with Object
}

int main()
{
   SomeBigObject x;
   foo(&x)

   return 0;
}

void foo(SomeBigObject* x)
{
   // do something with Object
}



int main()
{
   SomeBigObject x;
   foo(x)

   return 0;
}

void foo(SomeBigObject& x)
{
   // do something with Object
   x.getPrivateValues();
}