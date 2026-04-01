#include <iostream>
using namespace std;

class A
{
private:
    int AData = 10;

public:
    
    class B {
    public:
        void display() {
            cout << "This is B class." << endl;
        }
    };

    void showA() 
    {
        cout << " AData: " << AData << endl;
    }
};

int main() {
    A obj1;
    obj1.showA();
    A::B obj2;
    obj2.display();

    return 0;
}