#include <iostream>
using namespace std;

void ex1()
{
    cout << "Time = ";
    int n;
    cin >> n;
    cout << "Distance = " << 0.5 * 32 * n * n << endl;
}

void ex2()
{
    cout << "Radius = ";
    int n;
    cin >> n;
    cout << "Volume = " << (4.0 / 3.0) * 3.14 * n * n * n << endl;
}

void ex3()
{
    double ps, newsal, cp;
    cout << "Previous annual salary = ";
    cin >> ps;
    const double c = 0.115;
    cp = ps * c;
    newsal = ps + cp;
    cout << "New annual salary: " << newsal
         << "\nNew monthly salary: " << newsal / 12
         << "\nOld monthly salary: " << ps / 12
         << "\nCompensation pay received: " << cp << endl;
}

void ex4()
{
    double w, h;
    cout << "Weight = ";
    cin >> w;
    cout << "Height = ";
    cin >> h;
    cout << "BMI = " << w / (h * h) << endl;
}

void ex5()
{
    cout << "Size = ";
    int n;
    cin >> n;
    int *a = new int[n];
    cout << "Values = \n";
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    cout << "[";
    for (int i = 0; i < n; ++i)
    {
        cout << a[i];
        if (i != n - 1)
            cout << ", ";
    }
    cout << "]\n";
    delete[] a;
}

void ex6()
{
    cout << "Quantity = \n";
    int n;
    cin >> n;
    n *= 100;
    if (n > 1000)
        n -= n * 0.1;
    cout << "Cost = " << n << endl;
}

void ex7()
{
    int n;
    cout << "Marks = ";
    cin >> n;
    char c;
    if (n >= 80)
    {
        c = 'A';
    }
    else if (n >= 60)
    {
        c = 'B';
    }
    else if (n >= 50)
    {
        c = 'C';
    }
    else if (n >= 45)
    {
        c = 'D';
    }
    else if (n >= 25)
    {
        c = 'E';
    }
    else
    {
        c = 'F';
    }
    cout << "Grade = " << c << endl;
}

void ex8()
{
    int n;
    cout << "Temperature = ";
    cin >> n;
    if (n >= 80)
    {
        cout << "Swimming\n";
    }
    else if (n >= 60)
    {
        cout << "Tennis\n";
    }
    else if (n >= 40)
    {
        cout << "Golf\n";
    }
    else
    {
        cout << "Skiing\n";
    }
}

void ex9()
{
    double n, r1;
    int r2;
    cout << "Current annual salary = ";
    cin >> n;
    cout << "Rating = ";
    cin >> r2;
    switch (r2)
    {
    case 1:
        r1 = n * 0.06;
        break;

    case 2:
        r1 = n * 0.04;
        break;

    case 3:
        r1 = n * 0.015;
        break;
    }
    cout << "Raise: " << r1 << endl;
    cout << "New annual salary: " << n + r1 << endl;
}

void ex10()
{
    double n;
    cout << "Marks = ";
    cin >> n;
    if (n >= 85)
    {
        cout << "E\n";
    }
    else if (n >= 75)
    {
        cout << "O\n";
    }
    else if (n >= 65)
    {
        cout << "G\n";
    }
    else if (n >= 50)
    {
        cout << "S\n";
    }
    if (n >= 33)
    {
        cout << "Resit\n";
    }
    else
    {
        cout << "Redo\n";
    }
}

int main()
{
    // cout << "Ex1\n";
    // ex1();
    // cout << "Ex2\n";
    // ex2();
    // cout << "Ex3\n";
    // ex3();
    // cout << "Ex4\n";
    // ex4();
    // cout << "Ex5\n";
    // ex5();
    // cout << "Ex6\n";
    // ex6();
    // cout << "Ex7\n";
    // ex7();
    // cout << "Ex8\n";
    // ex8();
    // cout << "Ex9\n";
    // ex9();
    // cout << "Ex10\n";
    // ex10();
    return 0;
}