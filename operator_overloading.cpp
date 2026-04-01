#include <iostream>
using namespace std;
class Distance
{
    public:
    int feet , inch;
    Distance(int f, int i)
    {
        this->feet=f;
        this->inch=i;
        cout<<"\n The initial value of feet & inch is:  "<<feet<<"  "<<inch<<endl;
    }
    void operator--()
    {
    feet--;
    inch--;
    cout<<" The value of feet & inch after Decrement:  "<<feet<<"  "<<inch<<endl;
    }
};
int main()
{
    Distance d1(8,9);
    --d1;
    return 0;
}