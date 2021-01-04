// Given an integer n, return the number of trailing zeroes in n!

class Solution {
public:
    int trailingZeroes(int n) {
        if (n<5) return 0;
        int p = 5;
        int ans = 0;
        while(n/p>0){
            ans += n/p;
            p *= 5;
        }
        return ans;
    }
};