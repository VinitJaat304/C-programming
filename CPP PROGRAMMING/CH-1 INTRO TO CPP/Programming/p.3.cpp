#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "enter any number: ";
    cin >> a;
    cout << "enter any number: ";
    cin >> b;

    for (int i = a; i <= b; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            cout << i << " * " << j << " = " << i * j << endl;
        }
        cout << endl;
    }
    return 0;
}
