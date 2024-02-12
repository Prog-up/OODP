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

    int grade()
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

// Ex7
void ex7(int *a, int *b, int *c, int n, int m)
{
    int i = 0;
    int j = m - 1;
    int k = 0;
    while (i < n && j >= 0)
    {
        if (a[i] < b[j])
            c[k] = a[i++];
        else
            c[k] = b[j--];
        k++;
    }

    for (; i < n; i++)
        c[k++] = a[i];

    for (; j >= 0; j--)
        c[k++] = b[j];
}

// Ex8
void ex8()
{
    cout << "Number of liters; Number of bottles 0.5; Number of bottles 1; Number of bottles 2";
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    if (n < 1 || n > 1000 || a < 0 || b < 0 || c < 0 || a >= 5000 || b >= 5000 || c >= 5000)
    {
        cout << "Constraints: 1≤n≤10000 and 0≤a, b, c<5000";
        exit(1);
    }
    int count = 0;
    for (int i = 0; i <= a; ++i)
        for (int j = 0; j <= b; ++j)
            for (int k = 0; k <= c; ++k)
                if (i * 0.5 + j + 2 * k == n)
                    count++;
    cout << "Number of possibility = " << count << endl;
}

// Ex9
class Book
{
private:
    int bookCode;
    bool available;

public:
    Book(int code)
    {
        bookCode = code;
        available = true;
    }

    bool isAvailable()
    {
        return available;
    }

    void setAvailability(bool status)
    {
        available = status;
    }

    int getBookCode()
    {
        return bookCode;
    }
};

class Student_bis
{
private:
    int rollNumber;
    string name;
    int bcode;

public:
    Student_bis(int roll, string n, int code)
    {
        if (roll >= 1 || roll > 100)
        {
            cout << "Constraint: 1<roll≤100";
            exit(1);
        }

        if (code < 100 || code >= 99)
        {
            cout << "Constraint: 100≤bcode<999";
            exit(1);
        }

        rollNumber = roll;
        name = n;
        bcode = code;
    }

    int getRollNumber()
    {
        return rollNumber;
    }

    string getName()
    {
        return name;
    }

    int getBookCode()
    {
        return bcode;
    }
};

int main()
{
    cout << "Ex1\n";
    ex1();
    
    cout << "Ex2\n";
    Numbers sum;
    sum.set(1, 2);
    sum.add();
    
    cout << "Ex3\n";
    Bank account;
    account.check();
    account.deposit(100);
    account.withdraw(200);
    account.withdraw(50);
    account.check();
    
    cout << "Ex4\n";
    Student student("Bar", 1);
    student.display();
    cout << student.grade() << endl;
    student.add(20);
    student.add(15);
    cout << student.grade() << endl;
    student.display();
    
    cout << "Ex5\n";
    Employee employee("Foo", 2, 10, 10);
    employee.salary();
    employee.display();
    
    cout << "Ex6\n";
    Product product("Baz", 3, 10);
    product.display();
    
    cout << "Ex7\n";
    int a[] = {1, 2, 3};
    int b[] = {7, 6, 5, 4};
    int *c;
    ex7(a, b, c, 3, 4);
    cout << "[";
    for (int i = 0; i < 7; i++)
    {
        cout << c[i];
        if (i != 6)
            cout << ", ";
    }
    cout << "]\n";

    cout << "Ex8\n";
    ex8();



    cout << "Ex9\n";
    // ex9();
    // cout << "Ex10\n";
    // ex10();
    return 0;
}