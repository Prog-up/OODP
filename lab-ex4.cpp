#include <iostream>
using namespace std;

// Ex1
class Car
{
private:
    int id;

protected:
    int weight;

public:
    int model;

    Car(int i, int w, int m)
    {
        id = i;
        weight = w;
        model = m;
    }

    int getId()
    {
        return id;
    }

    int getWeight()
    {
        return weight;
    }
};

// Ex2
class Rectangle
{
private:
    double length;
    double width;

public:
    Rectangle(double len, double wid)
    {
        length = len;
        width = wid;
    }

    double area()
    {
        return length * width;
    }

    double perimeter()
    {
        return 2 * (length + width);
    }
};

// Ex3
class Vehicle
{
protected:
    int speed;
    string color;

public:
    Vehicle(int s, string c)
    {
        speed = s;
        color = c;
    }

    void displayDetails()
    {
        cout << "Speed = " << speed << endl
             << "Color = " << color << endl;
    }
};

class Car2 : public Vehicle
{
private:
    string model;

public:
    Car2(int s, string c, string m) : Vehicle(s, c), model(m) {}

    void displayCarDetails()
    {
        displayDetails();
        cout << "Model = " << model << endl;
    }
};

class Bike : public Vehicle
{
private:
    string type;

public:
    Bike(int s, string c, string t) : Vehicle(s, c), type(t) {}

    void displayBikeDetails()
    {
        displayDetails();
        cout << "Type = " << type << endl;
    }
};

// Ex4
class Item
{
private:
    int id;
    int quantity;

public:
    Item(int i, int q)
    {
        id = i;
        quantity = q;
    }

    void add(Item &item)
    {
        if (id == item.id)
            quantity += item.quantity;
        else
            cout << "Not the same item" << endl;
    }

    void display()
    {
        cout << "Id = " << id << endl;
        cout << "Quantity = " << quantity << endl;
    }
};

// Ex5
class Student
{
private:
    string name;
    int id;
    float marks;

public:
    Student(string n, int i, float m)
    {
        name = n;
        id = i;
        marks = m;
    }

    void displayDetails() const
    {
        cout << "Name = " << name << endl;
        cout << "Id = " << id << endl;
        cout << "Marks = " << marks << endl;
    }

    float averageMarks(Student *students, int len);
};

float Student::averageMarks(Student *students, int len)
{
    float sum = marks;
    for (int i = 0; i < len; i++)
        sum += students[i].marks;
    return sum / (len + 1);
}

int main()
{
    cout << "\nEx1\n";
    Car car(100, 200, 300);
    cout << "Model = " << car.model << endl
         << "Id = " << car.getId() << endl
         << "Weight = " << car.getWeight() << endl;

    cout << "\nEx2\n";
    Rectangle rectangle(3, 7);
    cout << "Area = " << rectangle.area() << endl
         << "Perimeter = " << rectangle.perimeter() << endl;

    cout << "\nEx3\n";
    Car2 car2(300, "Grey", "BMW");
    car2.displayCarDetails();
    cout << endl;
    Bike bike(240, "Black", "Sports");
    bike.displayBikeDetails();

    cout << "\nEx4\n";
    Item obj1(1, 3);
    Item obj2(2, 3);
    Item obj3(1, 7);
    obj1.display();
    obj1.add(obj2);
    obj1.add(obj3);
    obj1.display();

    cout << "\nEx5\n";
    Student student1("Foo", 0, 10);
    Student student2("Bar", 1, 15);
    Student student3("Baz", 2, 18);
    Student *l = new Student[2]{student2, student3};
    student2.displayDetails();
    cout << "Average marks = " << student1.averageMarks(l, 2) << endl;

    return 0;
}
