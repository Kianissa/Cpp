first, handle edge cases:
if num < 0 not a palindrome
if num != 0 && num %10 == 0 (e.g. 10, 110, 120)
    not a palindrome

otherwise, it might be, so:
reverse the first half of the x and compare.

create var reverse = 0;
iterate while x> reverse.

on every iteration, take the LSB from X and make it rev's MSB:
```  reversed = reversed * 10 + x % 10; ```
remove the MSB off x:
``` x = x/10```

once x is either equal or smaller than rev, stop and check:
x == rev OR x == rev/10

the second condition covers the case from which x consists of an odd number of digits.


exampls:

x = 121
rev = 0

iter 1:
rev = 1
x = 12

iter 2:
rev = 12
x = 1

x < rev -> stop interating

x == rev ? NO
x == rev/10 ? YES

ce palindrome !

This solution runs O(N) where N is the number of digits X has.