/*#include <iostream>
using namespace std;
int main()
{
    int array[4] = {19, 24, 25, 35};

    cout << array[0] << endl;

    return 0;
}*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}