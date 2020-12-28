// Determine whether an integer is a palindrome. An integer is a palindrome when it reads the same backward as forward.
// Could you solve it without converting the integer to a string?

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || ( x%10 == 0 && x!=0) ) return false;
            // if the reversed number is larger than int.MAX => integer overflow problem.
            // so we are neither reversing whole number nor converting it to string
            // rather checking right and left halves of number
        int rev_no = 0;
        while(x > rev_no){
            rev_no = x % 10 + rev_no * 10;
            x /= 10;
        }
        return x == rev_no || x == rev_no/10;
            // Logic of return statement:  When the length is an odd number, we can get rid of the middle digit by revertedNumber/10
            // For example when the input is 12321, at the end of the while loop we get x = 12, revertedNumber = 123,
            // since the middle digit doesn't matter in palidrome(it will always equal to itself), we can simply get rid of it.
     }
};