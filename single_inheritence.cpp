#include <iostream>
using namespace std;
class parentclass
{
    public:
           parentclass()
           {
            cout<<"Parent class constructor called"<<endl;
           }
};
class childclass: public parentclass
{
    public:
           childclass()
           {
            cout<<"Child class constructor called";
           }
};
int main()
{
    childclass obj;
}