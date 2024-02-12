#include <iostream>
using namespace std;

void ex1()
{
    cout << "MENU 1. Add 2. Subtract 3. Multiply 4. Divide 5. Modulus \nEnter your choice: ";
    int n, n1, n2;
    cin >> n;
    cout << "Enter your two numbers: \n";
    cin >> n1 >> n2;
    cout << "Result: ";
    switch (n)
    {
    case 1:
        cout << n1 + n2 << endl;
        break;

    case 2:
        cout << n1 - n2 << endl;
        break;

    case 3:
        cout << n1 * n2 << endl;
        break;

    case 4:
        cout << n1 / n2 << endl;
        break;

    case 5:
        cout << n1 % n2 << endl;
        break;
    }
}

void ex2()
{
    for (int i = 1000; i <= 2000; i += 5)
        if (i % 8 == 0)
            cout << i << endl;
}

void ex3()
{
    string s;
    getline(cin, s);
    for (int i = s.length(); i >= 0; i--)
        cout << s[i];
    cout << endl;
}

void ex4()
{
    int a = rand() % 8 + 1;
    int n = 0;
    while (n != a)
        cin >> n;
    cout << "Well guessed!\n";
}

void ex5()
{
    for (int i = -4; i < 5; i++)
    {
        for (int j = 0; j < 5 - abs(i); j++)
            cout << "* ";
        cout << endl;
    }
}

void ex6()
{
    string s1;
    // s2 = "\0";
    getline(cin, s1);
    int i = 0;
    while (s1[i] != '\0')
    {
        i++;
    }
    char s2[i];
    for (int j = 1; j <= i; j++)
    {
        s2[j] = s1[i - j];
    }
    s2[i + 1] = '\0';
    cout << s2 << endl;
}

void ex7()
{
    int x, y;
    cin >> x >> y;
    // int a[x][y];
    cout << "[";
    for (int i = 0; i < x; i++)
    {
        cout << "[";
        for (int j = 0; j < y; j++)
        {
            // a[i][j] = i*j;
            cout << i * j;
            if (j != y - 1)
                cout << ", ";
        }
        cout << "]";
        if (i != x - 1)
            cout << ", ";
    }
    cout << "]\n";
}

void ex8()
{
    int d = 0;
    int l = 0;
    string s;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
            d++;
        else if ((s[i] >= 'A' && s[i] <= 'Z') || s[i] >= 'a' && s[i] <= 'z')
            l++;
    }
    cout << "Letters " << l << endl
         << "Digits " << d << endl;
}

void ex9()
{
    int m, M, d, o;
    m = 0;
    M = 0;
    d = 0;
    o = 0;
    string s;
    while (m + M + d + o < 6 || m + M + d + o > 16 || !m || !M || !d || !o)
    {
        m = 0;
        M = 0;
        d = 0;
        o = 0;
        cout << "Input your password ";
        getline(cin, s);
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= '0' && s[i] <= '9')
                d++;
            else if ((s[i] >= 'A' && s[i] <= 'Z'))
                M++;
            else if (s[i] >= 'a' && s[i] <= 'z')
                m++;
            else if (s[i] == '$' || s[i] == '#' || s[i] == '@')
                o++;
        }
        if (m + M + d + o < 6 || m + M + d + o > 16 || !m || !M || !d || !o)
            cout << "Not a Valid Password\n";
    }
    cout << "Valid Password\n";
}

void ex10()
{
    for (int i = 100; i <= 400; i += 2)
        cout << i << ", ";
    cout << endl;
}

void ex11()
{
    string m[12] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"};

    int d[12] = {
        31, 28, 31, 30, 31, 30,
        31, 31, 30, 31, 30, 31};

    string s;
    cout << "Month = ";
    cin >> s;

    int i = 0;
    for (; i < 12; i++)
    {
        if (s.compare(m[i]) == 0)
            break;
    }

    cout << "Number of days = " << d[i] << endl;
}

void ex12()
{
    int x, y;
    cin >> x >> y;
    if (x + y >= 105 && y + x <= 200)
        cout << 200 << endl;
    else
        cout << x + y << endl;
}

void ex13()
{
    for (int i = 9; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
            cout << i;
        cout << endl;
    }
}

int main()
{
    cout << "Ex1\n";
    ex1();
    cout << "Ex2\n";
    ex2();
    cout << "Ex3\n";
    ex3();
    cout << "Ex4\n";
    ex4();
    cout << "Ex5\n";
    ex5();
    cout << "Ex6\n";
    ex6();
    cout << "Ex7\n";
    ex7();
    cout << "Ex8\n";
    ex8();
    cout << "Ex9\n";
    ex9();
    cout << "Ex10\n";
    ex10();
    cout << "Ex11\n";
    ex11();
    cout << "Ex12\n";
    ex12();
    cout << "Ex13\n";
    ex13();
    return 0;
}