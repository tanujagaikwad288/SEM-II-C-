//Design a C++ program demonstrating single Level Inheritance between Appliance(base) and Washing Machine(derived).
//CO-1 : Create a base class Appliance with private members , applianceID, brand, powerRating, price .
// Include a static member applianceCount.Provide methods input(), display(), and Static function showCount().
#include <iostream>
using namespace std;

class Appliance
{
    private:
    int applianceID;
    string brand;
    int powerRating;
    float price;

    public:
    static int applianceCount;

    Appliance()
    {
        applianceID=0;
        brand="None";
        powerRating=0;
        price=0;
        applianceCount++;
    }
    Appliance(int id, string b, int p, float pr)
    {
        applianceID=id;
        brand=b;
        powerRating=p;
        price=pr;
        applianceCount++;
    }
    void input()
    {
        cout<<"Enter Appliance ID: ";
        cin>>applianceID;
        cout<<"Enter Brand: ";
        cin>>brand;
        cout<<"Enter powerRating: ";
        cin>>powerRating;
        cout<<"Enter Price: ";
        cin>>price;
    }
    void display()
    {
        cout<<"\n Appliance ID: "<<applianceID;
        cout<<"\n Brand: "<<brand;
        cout<<"\n Power Rating: "<<powerRating;
        cout<<"\n Price: "<<price<<endl;
    }
    static void showCount()
    {
        cout<<"\n Total Appliances: "<<applianceCount<<endl;
    }
};
int Appliance::applianceCount=0;
class WashingMachine:public Appliance
{
    private:
        int capacity;
        string type;

    public:
        void inputWM()
        {
            input();
            cout<<"Enter Capacity(Kg): ";
            cin>>capacity;
            cout<<"Enter Type (Automatic/Semi): ";
            cin >> type;
        }    
         void displayWM()
    {
        display();
        cout << "Capacity: " << capacity << " kg" << endl;
        cout << "Type: " << type << endl;
    }
};
 int main()
{
    WashingMachine wm;

    wm.inputWM();
    wm.displayWM();

    Appliance::showCount();

    return 0;
}   