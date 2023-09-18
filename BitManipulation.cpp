// 1. GetBit

// n=0101
// Suppose we need to get bit position, i=2

// #include <iostream>
// using namespace std;

// int getBit(int n, int pos)
// {
//     return ((n & (1 << pos)) != 0);
// }

// int main()
// {
//     cout << getBit(5, 2) << endl;
//     return 0;
// }

//________________________________________________________

// 2. Set Bit

// n=0101
// Suppose we need to set bit at position, i=1
// 1<<i=0010
// 0101 | 0010=0111

// #include <iostream>
// using namespace std;

// int setBit(int n, int pos)
// {
//     return (n | (1 << pos));
// }
// int main()
// {
//     cout << setBit(5, 1) << endl;
//     return 0;
// }

//_____________________________________________

// 3. Clear Bit

//  n=0101
// suppose we need to clear bit at position,i=2
// 1<<i=0100
//  ~0100=1011
// 0101 & 1011=0001

// #include <iostream>
// using namespace std;

// int clearBit(int n, int pos)
// {
//     int mask = ~(1 << pos);
//     return (n & mask);
// }
// int main()
// {
//     cout << clearBit(5, 2) << endl;
//     return 0;
// }

//_________________________________________________

// 4. Update bit

// n=0101
// Suppose we need to update bit at position, i=1 to 1
// 1<<i=0010
// ~0010=110
// 0101 & 1101=0101

#include <iostream>
using namespace std;

int updateBit(int n, int pos, int value)
{
    int mask = ~(1 << pos);
    n = n & mask;
    return (n | (value << pos));
}

int main()
{
    cout << updateBit(5, 1, 1) << endl;
    return 0;
}
