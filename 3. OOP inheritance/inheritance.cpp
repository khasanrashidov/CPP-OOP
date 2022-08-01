#include <iostream>
using namespace std;

// superclass - parent class - base class: the class that is inherited from
// subclass - child class - derived class: the class that inherits from superclass

class AbstractEmployee
{
    virtual void AskForPromotion() = 0;
};

class Employee : AbstractEmployee
{
private:
    string company;
    int age;

protected:
    string name;

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

// If base class has a constructor,
// then derived class loses its own the default constructor.
class Developer : public Employee // "public" Employee to access some properties of Employee
{
public:
    string language;
    Developer(string name, string company, int age, string language)
        : Employee(name, company, age)
    {
        this->language = language;
    }
    void FixBug()
    {
        cout << name << " is fixing a bug using " << language << "." << endl;
    }
};

class Teacher : public Employee
{
public:
    string subject;
    void PreparedLesson()
    {
        cout << name << " prepared a lesson on " << subject << "." << endl;
    }
    Teacher(string name, string company, int age, string subject)
        : Employee(name, company, age)
    {
        this->subject = subject;
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
    cout << endl;
    employee2.AskForPromotion();
    cout << endl;

    Developer developer1 = Developer("Peter", "Facebook", 23, "Java");
    developer1.FixBug();
    cout << endl;
    developer1.AskForPromotion(); // works when base class is "public:" in derived class
    cout << endl;

    Teacher teacher1 = Teacher("Anna", "School of Science", 32, "Math");
    teacher1.PreparedLesson();
    cout << endl;
    teacher1.AskForPromotion(); // works when base class is "public:" in derived class
    cout << endl;

    return 0;
}
