// Implement default and parameterised constructors for appliance
#include <iostream>
using namespace std;

class Appliance
{
private:
    string brand;
    int power;   

public:
   
    Appliance()
    {
        brand = "Unknown";
        power = 0;
        cout << "Default constructor called" << endl;
    }

   
    Appliance(string b, int p)
    {
        brand = b;
        power = p;
        cout << "Parameterized constructor called" << endl;
    }

    
    void display()
    {
        cout << "Brand: " << brand << endl;
        cout << "Power: " << power << " watts" << endl;
    }

   
    friend float calculateElectricityCost(Appliance &, float);

     
    ~Appliance()
    {
        cout << "Appliance removed: " << brand << endl;
    }
};


float calculateElectricityCost(Appliance &a, float rate)
{
    float cost;
    cost = a.power * rate;
    return cost;
}

int main()
{
    Appliance a1;                 
    Appliance a2("LG", 500);     

    a2.display();

    float rate = 0.5;
    float cost = calculateElectricityCost(a2, rate);

    cout << "Electricity Cost: " << cost << endl;

    return 0;
}