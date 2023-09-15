#include <iostream>
using namespace std;

int main()
{
    // Pointer arithmatic
    //     int a = 10;
    //     int *aptr = &a;
    //     cout << aptr << endl;

    //     aptr++;
    //     cout << aptr << endl;

    // Pointer and array

    int arr[] = {10, 20, 30};
    cout << *arr << endl;
    int *ptr = arr;
    for (int i = 0; i < 3; i++)
    {
        // cout << *ptr << endl;
        // ptr++;
        cout << *(arr + i) << endl;
    }

    return 0;
}
