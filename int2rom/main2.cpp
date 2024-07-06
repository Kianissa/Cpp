
#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

#define M 1000
#define C 100
#define X 10
#define I 1

using namespace std;

class Solution
{
public:
    unordered_map<int, string> Numerals = {
        {1, "I"},
        {5, "V"},
        {10, "X"},
        {50, "L"},
        {100, "C"},
        {500, "D"},
        {1000, "M"}};

    string intToRoman(int num)
    {
        string romanNumeral = "";
        while (num > 0)
        {
            int tmp;
            int lev;
            if (num >= M)
            {
                tmp = num / M;
                lev = M;
            }
            else if (num >= C)
            {
                tmp = num / C;
                lev = C;
            }
            else if (num >= X)
            {
                tmp = num / X;
                lev = X;
            }
            else
            {
                tmp = num;
                lev = I;
            }
            romanNumeral.append(parseDigit(tmp, lev));
            num -= tmp * lev;
        }
        return romanNumeral;
    }

    string parseDigit(int digit, int level)
    {
        string str;
        switch (digit)
        {
        case 1:
            str.append(Numerals[level]);
            break;
        case 2:
            str.append(Numerals[level]);
            str.append(Numerals[level]);
            break;
        case 3:
            str.append(Numerals[level]);
            str.append(Numerals[level]);
            str.append(Numerals[level]);
            break;
        case 4:
            str.append(Numerals[level]);
            str.append(Numerals[level * 5]);
            break;
        case 5:
            str.append(Numerals[level * 5]);
            break;
        case 6:
            str.append(Numerals[level * 5]);
            str.append(Numerals[level]);
            break;
        case 7:
            str.append(Numerals[level * 5]);
            str.append(Numerals[level]);
            str.append(Numerals[level]);
            break;
        case 8:
            str.append(Numerals[level * 5]);
            str.append(Numerals[level]);
            str.append(Numerals[level]);
            str.append(Numerals[level]);
            break;
        case 9:
            str.append(Numerals[level]);
            str.append(Numerals[level * 10]);
            break;
        }
        return str;
    }
};
int main()
{

    Solution int2Rom;

    cout << int2Rom.intToRoman(3) << endl;
    cout << int2Rom.intToRoman(10) << endl;
    cout << int2Rom.intToRoman(58) << endl;
    cout << int2Rom.intToRoman(60) << endl;
    cout << int2Rom.intToRoman(1994) << endl;

    return 0;
}