#include <iostream>
using namespace std;
class Happiness
{
public:
    int Meat()
    {
        int d, p, a, res, m;
        cin >> d;
        res = 0;
        m = TMP_MAX;
        for (int i = 0; i < d; i++)
        {
            cin >> a >> p;
            if (m > p)
                m = p;
            res += m * a;
        }
        return res;
    }
};

class Farm
{
    public:void Fence()
    {
        int n, a;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            // cout << (!(180%a))? "Yes\n" : "No\n";
            if (180%a == 0)
                cout << "Yes\n";
            else
                cout << "No\n";            
        }
    }
};

int main()
{
    Happiness Purchase;
    cout << Purchase.Meat();


    Farm robot;
    robot.Fence();

    return 0;
}