#include <iostream>
using namespace std;
class person
{
    protected:
              string name;
    public:
              void getName()
              {
                cout<<"Enter Student name:";
                cin>>name;
              }          
};
class student: public person
{
    private:
    int rollNumber;
    float marks;
    
    public:
             void getDetails()
             {
                getName();
                cout<<"Enter roll Number:";
                cin>>rollNumber;
                cout<<"Enter marks:";
                cin>>marks;
             }
             void displayInfo()
             {
                cout<<"\n--- Student information ---"<<endl;
                cout<<"Name:"<<name<<endl;
                cout<<"Roll Number:"<<rollNumber<<endl;
                cout<<"Marks:"<<marks<<endl;
             }
};
int main()
{
    student s;
    s.getDetails();
    s.displayInfo();
}