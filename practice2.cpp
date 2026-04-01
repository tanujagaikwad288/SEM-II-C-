#include <iostream>
using namespace std;

class Results
{
private:
    int m1 = 10;
    int m2 = 20;
    int m3 =40;

public:
    
    class Sports {
    public:
        void display() {
            cout << "This is Sports class." << endl;
        }
    };

    void showResults() 
    {
        cout<< " ResultsData: " << showResults<< endl;
    }
};

int main() {
    Results obj1;
    obj1.showResults();
    Results::Sports obj2;
    obj2.display();

    return 0;
}