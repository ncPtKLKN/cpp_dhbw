class Base
{
public:
   void a(){};
protected:
   void b(){};
private:
   void c(){};
};

class Derived : public Base
{
   void test()
   {
      a();
      b();
      c();
   }
};


int main()
{
   Derived derived;
   derived.a();
   derived.b();
   derived.c();
   return 0;
}


// int main()
// {
//    Base base;
//    base.a();
//    base.b();
//    base.c();
//    return 0;
// }