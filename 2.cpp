#include <iostream>
using namespace std;

class Result 
{
private:
    float m1, m2, m3;  

public:
   
    class Sports 
    {
    private:
        float sportsMarks;

    public:
        void setSportsMarks(float s) {
            sportsMarks = s;
        }
        float getSportsMarks() {
            return sportsMarks;
        }
    };
    void setMarks(float a, float b, float c) {
        m1 = a;
        m2 = b;
        m3 = c;
    }
    void calculateResult() {
        Sports s;
        float sm;

        cout << "Enter Sports Marks: ";
        cin >> sm;
        s.setSportsMarks(sm);

        float total = m1 + m2 + m3 + s.getSportsMarks();
        float percentage = total / 4;
        cout << "\nTotal Marks = " << total << endl;
        cout << "Percentage = " << percentage << "%" << endl;
    }
};
int main() {
    Result r;
    float a, b, c;

    cout << "Enter marks of 3 subjects: ";
    cin >> a >> b >> c;
    r.setMarks(a, b, c);
    r.calculateResult();

    return 0;
}