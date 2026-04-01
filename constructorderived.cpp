#include <iostream>
using namespace std;

class Base
{
    int id;
    public:
    Base(int i)
    {
        id=i;
        cout<<"Base constructor called with id= "<<id<<endl;
    }
};
class Derived : public Base
{
    double cost;
   
   public:
   Derived (int i, double c): Base(i)
   {
    cost=c;
    cout<<"Derived constructor called with cost= "<<cost<<endl;
   }   
};
int main()
{
     Derived d(10 , 99.99);
}