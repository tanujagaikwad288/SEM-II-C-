#include <iostream>
using namespace std;

class Car
{
    int carCount;
    public:
    void get()
    {
        cout<<"Enter the Total car count:   ";
        cin>>carCount;
        cout<<"Total Car count=  "<<carCount<<endl;
    }
};
class Bike
{
    int bikeCount;
    public:
    void get1()
    {
        cout<<"Enter the Total bike Count:  ";
        cin>>bikeCount;
        cout<<"Total bike Count=  "<<bikeCount<<endl;
    }
};
class Vehicle : public Car , public Bike
{
    public:
    
}