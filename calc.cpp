#include <iostream>
using namespace std;

int main()
{

    int a, b, c;
    cout << "enter 1st no" << endl;
    cin >> a;
    cout << "enter 2nd number" << endl;
    cin >> b;

    cout << "enter 1 for addn ,2 for sub ,3 for mul,4 for div " << endl;
    cin >> c;
    if (c == 1)
    {
        cout << a + b << endl;
    }
    else if (c == 2)
    {
        cout << a - b << endl;
    }
    else if (c == 3)
    {
        cout << a * b << endl;
    }
    else if (c == 4)
    {
        cout << a / b << endl;
    }
    else
        cout << " wrong input " << endl;

//prime or not will be added later 

    return 0;
}
