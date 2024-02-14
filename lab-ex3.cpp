#include <iostream>
using namespace std;

// Ex1
void ex1()
{
    char c;
    int *a = new int[0];
    int n = 0;
    int tmp;
    while (c != 'f')
    {
        cout << "Option = ";
        cin >> c;

        switch (c)
        {
        case 'a':
            cout << "Number of elements =";
            cin >> n;
            cout << "Values = ";
            for (int i = 0; i < n; i++)
            {
                cin >> a[i];
            }
            break;

        case 'b':
            cout << "[";
            for (int i = 0; i < n; i++)
            {
                cout << a[i];
                if (i != n - 1)
                    cout << ", ";
            }
            cout << "]\n";
            break;

        case 'c':
            for (int i = 1; i < n; ++i)
            {
                int k = a[i];
                int j = i - 1;
                while (j >= 0 && a[j] > k)
                {
                    a[j + 1] = a[j];
                    j = j - 1;
                }
                a[j + 1] = k;
                break;
            }

        case 'd':
            for (int i = 0; i < n - 1; ++i)
            {
                int m = i;
                for (int j = i + 1; j < n; ++j)
                {
                    if (a[j] < a[m])
                    {
                        m = j;
                    }
                }
                tmp = a[i];
                a[i] = a[m];
                a[m] = tmp;
                break;
            }

        case 'e':
            for (int i = 0; i < n - 1; ++i)
            {
                for (int j = 0; j < n - i - 1; ++j)
                {
                    if (a[j] > a[j + 1])
                    {
                        tmp = a[j];
                        a[j] = a[j + 1];
                        a[j + 1] = tmp;
                    }
                }
            }
        default:
            break;
        }
    }
}

// Ex2
class Numbers
{
private:
    int x, y;

public:
    void set(int a, int b)
    {
        x = a;
        y = b;
    }

    void add()
    {
        cout << x + y << endl;
    }
};

// Ex3
class Bank
{
private:
    double balance = 0;

public:
    void deposit(double x)
    {
        balance += x;
    }

    void withdraw(double x)
    {
        if (x <= balance)
        {
            balance -= x;
            cout << "Withdraw accepted\n";
        }
        else
            cout << "Withdraw rejected\n";
    }

    void check()
    {
        cout << "Balance = " << balance << endl;
    }
};

// Ex4
class Student
{
private:
    string name = "Foo";
    int id = 0;
    int len = 0;
    int *a = new int[100];

public:
    Student(string s, int i)
    {
        name = s;
        id = i;
    }

    double grade()
    {
        if (len == 0)
            return 0;

        double r = 0;
        for (int i = 0; i < len; i++)
            r += a[i];
        return r / len;
    }

    void display()
    {
        cout << "Name = " << name << endl;
        cout << "Id = " << id << endl;
        cout << "Grades = [";
        for (int i = 0; i < len; i++)
        {
            cout << a[i];
            if (i != len - 1)
                cout << ", ";
        }
        cout << "]\n";
    }

    void add(int g)
    {
        a[len++] = g;
    }
};

// Ex5
class Employee
{
private:
    string name;
    int id;
    double hourlyWage;
    double hoursWorked;

public:
    Employee(string s, int i, double w, double h)
    {
        name = s;
        id = i;
        hourlyWage = w;
        hoursWorked = h;
    }

    double salary() const
    {
        return hourlyWage * hoursWorked;
    }

    void display() const
    {
        cout << "Name = " << name << endl;
        cout << "Id = " << id << endl;
        cout << "Hourly Wage = " << hourlyWage << endl;
        cout << "Hours Worked = " << hoursWorked << endl;
    }
};

// Ex6
class Product
{
private:
    string name;
    int id;
    double price;

public:
    Product(string s, int i, double p)
    {
        name = s;
        id = i;
        price = p;
    }

    void display() const
    {
        cout << "Name = " << name << endl;
        cout << "Id = " << id << endl;
        cout << "Price = " << price << endl;
    }
};

int main()
{
    cout << "\nEx1\n";
    ex1();

    cout << "\nEx2\n";
    Numbers sum;
    sum.set(1, 2);
    sum.add();

    cout << "\nEx3\n";
    Bank account;
    account.check();
    account.deposit(100);
    account.withdraw(200);
    account.withdraw(50);
    account.check();

    cout << "\nEx4\n";
    Student student("Bar", 1);
    student.display();
    cout << student.grade() << endl;
    student.add(20);
    student.add(15);
    cout << student.grade() << endl;
    student.display();

    cout << "\nEx5\n";
    Employee employee("Foo", 2, 10, 10);
    cout << employee.salary() << endl;
    employee.display();

    cout << "\nEx6\n";
    Product product("Baz", 3, 10);
    product.display();

    return 0;
}