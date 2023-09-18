#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// int main()
// {
//     string str = "asdbdsjbek";

//     // convert into upper case
//     for (int i = 0; i < str.size(); i++)
//     {
//         if (str[i] >= 'a' && str[i] <= 'z')
//         {
//             str[i] -= 32;
//         }
//     }
//     cout << str << endl;

//     // convert int lower case
//     for (int i = 0; i < str.size(); i++)
//     {
//         if (str[i] >= 'A' && str[i] <= 'Z')
//         {
//             str[i] += 32;
//         }
//     }
//     cout << str << endl;
//     ;
// }

// *@#$   Form the biggest numberr from the numeric string

int main()
{
    // string s = "4573378933899";
    // sort(s.begin(), s.end(), greater<int>());
    // cout << s << endl;

    // &* Print maximum time chracter which occur

    string s = "fjwdhewifhuefeqyyyy";
    int freq[26];
    for (int i = 0; i < 26; i++)
    {
        freq[i] = 0;
    }
    for (int i = 0; i < s.size(); i++)
    {
        freq[s[i] - 'a']++;
    }
    char ans = 'a';
    int maxF = 0;

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] >= maxF)
        {
            maxF = freq[i];
            ans = i + 'a';
        }
    }
    cout << maxF << " " << ans << endl;
    return 0;
}