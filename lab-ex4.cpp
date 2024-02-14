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
        this->id = i;
        this->weight = w;
        this->model = m;
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

    int getId()
    {
        return id;
    }

    int getQuantity()
    {
        return quantity;
    }

    void add(Item &item)
    {
        if (id == item.getId())
            quantity += item.getQuantity();
        else
            cout << "Not the same item" << endl;
    }

    void display()
    {
        cout << "Id = " << id << endl;
        cout << "Quantity = " << quantity << endl;
    }
};

int main()
{
    cout << "\nEx1\n";
    Car car(100, 200, 300);
    cout << "Model = " << car.model << endl;
    cout << "Id = " << car.getId() << endl;
    cout << "Weight = " << car.getWeight() << endl;

    cout << "\nEx2\n";
    Rectangle rectangle(3, 7);
    cout << "Area = " << rectangle.area() << endl;
    cout << "Perimeter = " << rectangle.perimeter() << endl;

    cout << "\nEx3\n";
    Item obj1(1, 3);
    Item obj2(2, 3);
    Item obj3(1, 7);
    obj1.display();
    obj1.add(obj2);
    obj1.add(obj3);
    obj1.display();

    return 0;
}
