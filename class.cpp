#include <codecvt>
#include <cstdint>
#include <iostream>
// #include <random>
#include <string>
using namespace std;

class Happiness {
private:
    int n, a, p;

public:
    int Meat()
    {
        int min = INT32_MAX;
        int sum = 0;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> p >> a;
            if (min > p)
                min = p;
            sum += a * min;
        }
        return sum;
    }
};

class library {
private:
    int roll, bcode;
    string name;

public:
    library(int r, string n, int code)
    {
        roll = r;
        bcode = code;
        name = n;
    }

    void display()
    {
        cout << "Roll no:" << roll << endl;
        cout << "Name of the Student:" << name << endl;
        cout << "Code of Book Accessed:" << bcode << endl;
    }
};

class CheckTriangle {
private:
    int x, y, z;

public:
    void readCoordinates()
    {
        cin >> x >> y >> z;
    }

    void isosceles()
    {
        if (x == y || x == z || y == z)
            cout << "Can Form a ISOSCELES Triangle\n";
        else
            cout << "Cant Form a ISOSCELES Triangle\n";
    }
};

class student {
private:
    string name;
    int roll;
    double height, weight;

public:
    student()
    {
        name = "Bhagavan";
        roll = 1593;
        height = 172.5;
        weight = 60.4;
    }

    void displaydata()
    {
        string n;
        // cin >> n;
        getline(cin, n);
        if (n != "") {
            cout << n << endl;
            cout << name << " " << roll << " " << height << " " << weight << endl;
        }
    }
};

class Building {
private:
    int width, length, ratePerSqFeet;

public:
    void setValues()
    {
        cin >> width >> length >> ratePerSqFeet;
    }

    int calculateCost()
    {
        return width * length * ratePerSqFeet;
    }

    void determineSuitability()
    {
        if (abs(width - length) > 10)
            cout << "Stability : Not Suitable\n";
        else
            cout << "Stability : Suitable\n";
    }
};

class house {
private:
    int hno, no_rooms, length, breadth, height;
    string cty, state, name;

public:
    void input();
    void display();
};

void house::input()
{
    cin >> name;
    cin >> hno >> cty >> state;
    cin >> no_rooms;
}

void house::display()
{
    cout << "House name=" << name << endl
         << "House No=" << hno << endl
         << "City=" << cty << endl
         << "State=" << state << endl;
    for (int i = 0; i < no_rooms; i++) {
        cin >> length >> breadth >> height;
        cout << "Details of Room " << i + 1 << endl
             << "Length=" << length << endl
             << "Breadth=" << breadth << endl
             << "Height=" << height << endl;
    }
}

class GoodNum {
public:
    void check(int n)
    {
        int sum = 0;
        while (n != 0) {
            if (n % 10 == 0)
                sum++;
            n /= 10;
        }
        if (sum == 0)
            cout << "GOOD Number" << endl;
        else
            cout << sum << endl;
    }
};

class Salary {
public:
    void Increment(int c)
    {
        cout << c << endl;
    }

    void Increment(int c, int b)
    {
        cout << c + b << endl;
    }
};

class Attendance {
public:
    Attendance() { cout << "No Attendance" << endl; }
    Attendance(string s)
    {
        cout << "Hello " << s << endl;
    }
};

template <typename T>
T min(T a, T b)
{
    return (a < b) ? a : b;
}

template <typename T>
T max(T a, T b)
{
    return (a > b) ? a : b;
}

template <typename V>
bool equal(V a, V b)
{
    return a == b;
}

// Array class
template <typename T>
class Array {
private:
    T* a;
    int s;

public:
    Array(T* array, int len)
    {
        a = array;
        s = len;
    }
    void display()
    {
        int i;
        cout << "Array = [";
        for (i = 0; i < s - 1; i++) {
            cout << a[i] << ", ";
        }
        cout << a[i] << "]\n";
    }
};

// template <class A, class B>
//     class Couple >

int main()
{
    int a[] = { 69, 78, 90, 79 };
    char b[] = { 69, 78, 90, 79 };
    Array<int> obj1(a, 4);
    Array<char> obj2(b, 4);
    obj1.display();
    obj2.display();

    /*
    Attendance stdabs;
    string studentname;
    cin >> studentname;
    Attendance stdpst(studentname);

    int cursal, bonus;
    cin >> cursal;
    cin >> cursal;
    cin >> bonus;
    Salary empsal;
    empsal.Increment(cursal);
    empsal.Increment(cursal, bonus);

    Happiness Purchase;
    Purchase.Meat();

    int r, c;
    string n;
    cin >> r >> n >> c;
    library lib1(r, n, c);
    lib1.display();
    cin >> r >> n >> c;
    library lib2(r, n, c);
    lib2.display();

    CheckTriangle consruct;
    consruct.readCoordinates();
    consruct.isosceles();

    student s1, s2;
    s1.displaydata();
    s2.displaydata();

    Building construction;
    construction.setValues();
    cout << "Cost of the Building : " << construction.calculateCost();
    construction.determineSuitability();

    house h;
    h.input();
    h.display();

    GoodNum Learning;
    int N;
    cin >> N;
    Learning.check(N);
    */
}
