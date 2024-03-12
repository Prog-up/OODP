#include <iostream>
using namespace std;

// Ex1
class Employee
{
private:
    string name;
    double basicSalary;
    double bonus;

public:
    Employee(string n, double salary, double b)
    {
        name = n;
        basicSalary = salary;
        bonus = b;
    }
    double calculateTotalSalary()
    {
        return basicSalary + bonus;
    }

    void displayDetails()
    {
        cout << "Employee Name = " << name << endl
             << "Basic Salary = " << basicSalary << endl
             << "Bonus = " << bonus << endl
             << "Total Salary = " << calculateTotalSalary() << endl;
    }
};

// Ex2

class Customer
{
private:
    string name;
    string accountNumber;
    double balance;

public:
    Customer(string n, string accNum)
    {
        name = n;
        accountNumber = accNum;
        balance = 0.0;
    }
    void deposit(double amount)
    {
        balance += amount;
    }

    void withdraw(double amount)
    {
        if (balance >= amount)
        {
            balance -= amount;
            cout << "Withdrawal successful. Current balance = " << balance << endl;
        }
        else
        {
            cout << "Insufficient funds. Withdrawal failed.\n";
        }
    }

    void displayStatement()
    {
        cout << "Account Holder = " << name << endl
             << "Account Number = " << accountNumber << endl
             << "Current Balance = " << balance << endl;
    }
};

// Ex4
int add(int a, int b)
{
    return a + b;
}

double add(double a, double b)
{
    return a + b;
}

// Ex5
class Rectangle
{
private:
    double length;
    double width;

public:
    Rectangle(double l, double w)
    {
        length = l;
        width = w;
        cout << "Rectangle object created with length = " << length << " and width = " << width << endl;
    }

    ~Rectangle()
    {
        cout << "Rectangle object destroyed" << endl;
    }
};

// Ex6
class Base
{
public:
    Base()
    {
        cout << "Base constructor" << endl;
    }

    ~Base()
    {
        cout << "Base destructor" << endl;
    }
};

class Derived : public Base
{
public:
    Derived()
    {
        cout << "Derived constructor" << endl;
    }

    ~Derived()
    {
        cout << "Derived destructor" << endl;
    }
};

int main()
{
    // Ex1
    Employee emp1("John", 5000, 1000);
    Employee emp2("Alice", 6000, 1200);

    cout << "Employee 1 Details = " << endl;
    emp1.displayDetails();

    cout << "\nEmployee 2 Details = " << endl;
    emp2.displayDetails();

    // Ex2
    Customer foo("Foo", "0");
    foo.deposit(1000);
    foo.displayStatement();
    foo.withdraw(2000);
    foo.withdraw(500);
    foo.displayStatement();

    // Ex4
    int intResult = add(5, 10);
    double doubleResult = add(3.5, 2.7);

    cout << "Result of adding integers = " << intResult << endl
         << "Result of adding doubles = " << doubleResult << endl;

    // Ex5
    Rectangle rect2(5, 3);

    // Ex6
    Derived d;

    return 0;
}
