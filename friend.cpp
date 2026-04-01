#include <iostream>
using namespace std;
class Employee
{
    private:
       int salary;

    public:
       Employee(int s)
       {
        salary=s;
       }
       friend void displaySalary(Employee emp);

};
void displaySalary(Employee emp)
{
    cout<<"Salary: "<<emp.salary;
}
int main()
{
    Employee myEmp(500000);
    displaySalary(myEmp);
}