#include <iostream>
using namespace std;

int main()
{
    int angle1,angle2,angle3,sumofangles;
    cin >> angle1 >> angle2 >> angle3;
    sumofangles = angle1 + angle2 + angle3;
    if (sumofangles == 180)
        cout << "Angles are valid\n";
    else
        cout << "Angles are not valid\n";
    return 0;
}