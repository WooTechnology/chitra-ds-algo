// Given a positive integer n, find the smallest integer which has exactly the same digits existing in the integer n and is greater in value than n. If no such positive integer exists, return -1.
// Note that the returned integer should fit in 32-bit integer, if there is a valid answer but it does not fit in 32-bit integer, return -1.

class Solution {
public:
    int nextGreaterElement(int n) {
        string num = to_string(n);
        string maxi = to_string(INT_MAX);
        if(next_permutation(num.begin(), num.end())){
            if(num.length() >= maxi.length() && maxi.compare(num) < 0) return -1;
        return stoi(num);
       }
        return -1;
    }
};

