#include <iostream>
#include <vector>
#include <string>

using namespace std;

/* Symbol   |  Value */
#define I 1
#define V 5
#define X 10
#define L 50
#define C 100
#define D 500
#define M 1000

/* Input num = 3 , output: "III" */
/* Input num = 58, output: "LVIII" */
/* Input num = 1994, output: MCMXCIV */
/* explanation of last example: 1000: M + 900: CM + 90: XC + 4: IV */
/* num : (1, 3999) */

class Solution
{
public:
    string intToRoman(int num)
    {
        string romanNumeral = "";
        int i = 0;
        int temp;

        if (temp = num / M > 0)
        {

            switch (temp)
            {
            case 1:
                romanNumeral.append("M");
                break;

            case 2:
                romanNumeral.append("MM");
                break;

            case 3:
                romanNumeral.append("MMM");
                break;

            default:
                break;
            }

            num -= temp * M;
        }

        if (temp = num / C)
        {

            switch (temp)
            {
            case 1:
                romanNumeral.append("C");
                num -= 100;
                break;

            case 2:
                romanNumeral.append("CC");
                num -= 200;
                break;

            case 3:
                romanNumeral.append("CCC");
                num -= 300;
                break;

            case 4:
                romanNumeral.append("CD");
                num -= 400;
                break;

            case 5:
                romanNumeral.append("D");
                num -= 500;
                break;

            case 6:
                romanNumeral.append("DI");
                num -= 600;
                break;

            case 7:
                romanNumeral.append("DII");
                num -= 700;
                break;

            case 8:
                romanNumeral.append("DIII");
                num -= 800;
                break;

            case 9:
                romanNumeral.append("CM");
                num -= 900;
                break;
            }
        }

        if (temp = num / X)
        {
            switch (temp)
            {
            case 1:
                romanNumeral.append("X");
                num -= 10;
                break;

            case 2:
                romanNumeral.append("XX");
                num -= 20;
                break;

            case 3:
                romanNumeral.append("XXX");
                num -= 30;
                break;

            case 4:
                romanNumeral.append("XL");
                num -= 40;
                break;

            case 5:
                romanNumeral.append("L");
                num -= 50;
                break;

            case 6:
                romanNumeral.append("LI");
                num -= 60;
                break;

            case 7:
                romanNumeral.append("LII");
                num -= 70;
                break;

            case 8:
                romanNumeral.append("LIII");
                num -= 80;
                break;

            case 9:
                romanNumeral.append("XC");
                num -= 90;
                break;
            }
        }

        switch (num)
        {
        case 1:
            romanNumeral.append("I");
            num -= 1;
            break;

        case 2:
            romanNumeral.append("II");
            num -= 2;
            break;

        case 3:
            romanNumeral.append("III");
            num -= 3;
            break;

        case 4:
            romanNumeral.append("IV");
            num -= 4;
            break;

        case 5:
            romanNumeral.append("V");
            num -= 5;
            break;

        case 6:
            romanNumeral.append("VI");
            num -= 6;
            break;

        case 7:
            romanNumeral.append("VII");
            num -= 7;
            break;

        case 8:
            romanNumeral.append("VIII");
            num -= 8;
            break;

        case 9:
            romanNumeral.append("IX");
            num -= 9;
            break;
        }

        return romanNumeral;
    }
};

int main()
{

    Solution int2Rom;

    cout << int2Rom.intToRoman(3) << endl;
    cout << int2Rom.intToRoman(58) << endl;
    cout << int2Rom.intToRoman(1994) << endl;

    return 0;
}