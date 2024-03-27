#include <iostream>
using namespace std;

template <class T1, class T2>
class Operation
{
public:
    T1 x;
    T2 y;


    Operation(T1 a, T2 b)
    {
        x = a;
        y = b;
    }
    void Add(const Operation& other)
    {
        x += other.x;
        y += other.y;
    }
    void Sub(const Operation& other)
    {
        x -= other.x;
        y -= other.y;
    }
};

int main()
{
    Operation<int, float> op1(0, 0.3f);
    Operation<int, float> op2(2, 3.3f);
    op1.Add(op2);
    cout << op1.y << endl;
}