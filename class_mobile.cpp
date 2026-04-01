#include <iostream>
#include <string>
using namespace std;
class MobilePhone {
private:
    string brand;
    string model;
    double price;

public:
   
    MobilePhone(string b, string m, double p) : brand(b), model(m), price(p) {

    }
     MobilePhone(const MobilePhone& other) : brand(other.brand), model(other.model), price(other.price) {
        
    }

    void applyDiscount(double discountPercentage) {
        price = price * (1.0 - discountPercentage / 100.0);
    }

    void displayDetails() const {
        cout << "Brand: " << brand << ", Model: " << model << ", Price: $" << price << std::endl;
    }
};

int main() {
    MobilePhone phone1("Samsung", "Galaxy S21", 799.99);
    MobilePhone phone2 = phone1; 
    phone2.applyDiscount(10.0); 
    cout << "Original Phone Details:" << std::endl;
    phone1.displayDetails();
    cout << "Discounted Phone Details:" << std::endl;
    phone2.displayDetails();

    return 0;
}
