// Find maximum amoung two number

#include <iostream>
using namespace std;
int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    if (n1 > n2)
    {
        cout << "maximum number is n1: " << n1 << endl;
    }
    else
    {
        cout << "maximum number is n2: " << n2 << endl;
    }
    return 0;
}