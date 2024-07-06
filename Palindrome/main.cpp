
#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Example 1:

// Input: x = 121
// Output: true
// Explanation: 121 reads as 121 from left to right and from right to left.
// Example 2:

// Input: x = -121
// Output: false
// Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
// Example 3:

// Input: x = 10
// Output: false
// Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
 

// Constraints:

// -231 <= x <= 231 - 1
 

// Follow up: Could you solve it without converting the integer to a string?

class Solution {
    public:
        bool isPalindrome(int x) {
        if (x < 0 || (x != 0 && x % 10 == 0)) {
            return false;
        }

        int reversed = 0;
        int original = x;

        while (x > reversed) {
            
            reversed = reversed * 10 + x % 10;
            x /= 10;
        }

        return (x == reversed) || (x == reversed / 10);
    }
};

int main()
{
    Solution mySol;

    cout << "123454321 " << endl << mySol.isPalindrome(123454321) << endl;
}