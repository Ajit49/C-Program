#include <iostream>
using namespace std;
int main()
{
    /*int n;
    cin >> n;
    int sum = 0;
    for (int counter = 1; counter <= n; counter++)
    {
        sum = sum + counter;
    }
    cout << sum << endl;*/
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int i;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "Non Prime" << endl;
            break;
        }
    }
    if (i == n)
    {
        cout << "Prime number" << endl;
    }
    return 0;
}
