#include <iostream>
using namespace std;

class Person
{
public:
    Person()
    {
        cout << "Person constructor called" << endl;
    }
    void display()
    {
        cout << "I am a Person" << endl;
    }
};


class Student : virtual public Person
{
public:
    Student()
    {
        cout << "Student constructor called" << endl;
    }
};

class Employee : virtual public Person
{
public:
    Employee()
    {
        cout << "Employee constructor called" << endl;
    }
};

class WorkingStudent : public Student, public Employee
{
public:
    WorkingStudent()
    {
        cout << "WorkingStudent constructor called" << endl;
    }
};

int main()
{
    WorkingStudent ws;
    ws.display(); 

    return 0;
}