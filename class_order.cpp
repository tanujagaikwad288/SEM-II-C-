#include <iostream>
#include <string>

using namespace std;

class Order {
private:
    int orderId;
    string productName;
    int quantity;
    double pricePerUnit;
    double totalBill;

public:
   
    Order(int id, string name, int qty, double price) {
        orderId = id;
        productName = name;
        quantity = qty;
        pricePerUnit = price;
        totalBill = quantity * pricePerUnit;
    }

        void displayBill() {
        cout << "----------------------" << endl;
        cout << "Order ID: " << orderId << endl;
        cout << "Product Name: " << productName << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Price Per Unit: $" << pricePerUnit << endl;
        cout << "----------------------" << endl;
        cout << "Total Bill Amount: $" << totalBill << endl;
        cout << "----------------------" << endl;
    }
};

int main() {
    
    Order myOrder(101, "Laptop", 2, 999.99);
    myOrder.displayBill();

    return 0;
}
