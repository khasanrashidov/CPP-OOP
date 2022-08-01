#include <iostream>
using namespace std;

class Employee
{
    // Everything inside class in C++ is private by default,
    // which means all of the member of a class are private.

    // Three types of access modifiers in C++:
    // private, public, protected.
public:
    string name;
    string company;
    int age;
    void IntroduceYourself()
    {
        cout << "Name: " << name << endl;
        cout << "Company: " << company << endl;
        cout << "Age: " << age << endl;
    }
    // Constructor is a special type of method
    // that is invoked each time when an object of a class is created.
    // Default constructor is automatically generated by a compiler.
    // Constructor is a method which doesn't have a return type.
    // Constructor has the same name as the class it belongs to.
    // Constructor usually almost always is public.
    // When we create a constructor we lose the default constructor.
    Employee(string name, string company, int age)
    {
        this->name = name;
        this->company = company;
        this->age = age;
    }
};

// Four most important concepts of OOP in C++:
// 1) Encapsulation - hiding the details of a class.
// 2) Abstraction - showing only essential attributes and hiding complex unnecessary information.
// 3) Inheritance - creating a new class from an existing class.
// 4) Polymorphism - using the same method name in different ways.

int main(int argc, char **argv)
{
    // Employee employee1;
    // employee1.name = "James";
    // employee1.company = "Google";
    // employee1.age = 25;
    Employee employee1 = Employee("James", "Google", 25);
    employee1.IntroduceYourself();
    cout << endl;

    // Employee employee2;
    // employee1.name = "Steve";
    // employee1.company = "Microsoft";
    // employee1.age = 30;
    employee1.IntroduceYourself();
    Employee employee2 = Employee("Steve", "Microsoft", 30);
    cout << endl;

    // Employee employee3;
    // employee3.IntroduceYourself();
    cout << endl;

    return 0;
}