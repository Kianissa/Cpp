
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution
{
public:
    int romanToInt(string s)
    {
        int i = 0;
        int dec = 0;
        int flag = 0;
        int len = s.length();
        for (i = 0; i < s.length(); i++)
        {
            /* check if I is one of I,X,C */ /* if yes, then check if it's there's another char after it */ /* if yes, then check if it's once of the substraction combos, e.g. IX - -1 + 5 -> 4, or IX - -1+10 -> 9 */ /* if not, then return the simple value of it. */ /* else check if it's one of the rest */
            int tmp = 0;
            switch (s[i])
            {
            case 'I':
                tmp = 1;
                if (i + 1 < len)
                {
                    if (s[i + 1] == 'V' || s[i + 1] == 'X')
                    {
                        flag = 1;
                    }
                }
                break;
            case 'V':
                tmp = 5;
                break;
            case 'X':
                tmp = 10;
                if (s[i + 1] == 'L' || s[i + 1] == 'C')
                {
                    flag = 1;
                }
                break;
            case 'L':
                tmp = 50;
                break;
            case 'C':
                tmp = 100;
                if (s[i + 1] == 'D' || s[i + 1] == 'M')
                {
                    flag = 1;
                }
                break;
            case 'D':
                tmp = 500;
                break;
            case 'M':
                tmp = 1000;
                break;
            }
            if (flag && (i + 1 < s.length()))
            {
                tmp = -tmp;
                flag = 0;
            }
            dec += tmp;
        }
        return dec;
    }
};

int main()
{
    Solution myRomanToInt;

    cout << myRomanToInt.romanToInt("III") << ',';
    cout << myRomanToInt.romanToInt("IV") << ',';
    cout << myRomanToInt.romanToInt("MCMXCIV") << ',';
    cout << myRomanToInt.romanToInt("LVIII") << ',';

    return 0;
}