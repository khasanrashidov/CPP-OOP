#include <iostream>
using namespace std;

class AbstractEmployee
{
    virtual void AskForPromotion() = 0;
};

class Employee : AbstractEmployee
{
private:
    string name;
    string company;
    int age;

public:
    void IntroduceYourself()
    {
        cout << "Name: " << name << endl;
        cout << "Company: " << company << endl;
        cout << "Age: " << age << endl;
    }

    void setName(string name)
    {
        this->name = name;
    }
    string getName()
    {
        return name;
    }
    void setCompany(string company)
    {
        this->company = company;
    }
    string getCompany()
    {
        return company;
    }
    void setAge(int age)
    {
        if (age >= 18)
        {
            this->age = age;
        }
        else
        {
            cout << "Age must be at least 18." << endl;
        }
    }
    int getAge()
    {
        return age;
    }

    Employee(string name, string company, int age)
    {
        this->name = name;
        this->company = company;
        this->age = age;
    }

    void AskForPromotion()
    {
        if (age > 30)
        {
            cout << name << " is eligible for promotion." << endl;
        }
        else
        {
            cout << name << " is not eligible for promotion." << endl;
        }
    }
};

int main(int argc, char **argv)
{
    Employee employee1 = Employee("James", "Google", 25);
    employee1.IntroduceYourself();
    cout << endl;

    employee1.IntroduceYourself();
    Employee employee2 = Employee("Steve", "Microsoft", 30);
    cout << endl;

    employee1.setAge(40);
    cout << employee1.getName() << " is " << employee1.getAge() << " years old." << endl;
    cout << endl;

    employee2.setAge(16);
    cout << employee2.getName() << " is " << employee2.getAge() << " years old." << endl;
    cout << endl;

    employee1.AskForPromotion();
    employee2.AskForPromotion();
    cout << endl;
    cout << endl;

    return 0;
}