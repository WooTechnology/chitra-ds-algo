// Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.
// Follow up: Could you implement a solution using only O(1) extra space complexity and O(n) runtime complexity?

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans = nums.size();
        for(int i = 0; i<nums.size(); i++ ){
            ans ^= i ^ nums[i]; // xor of index and the value at the index: with xor of size of vector i.e n
        }
        return ans;
    }
};

// Because we know that nums contains n numbers and that it is missing exactly one number on the range [0..n-1][0..n−1], we know that n definitely replaces the missing number in nums. Therefore, if we initialize an integer to nn and XOR it with every index and value, we will be left with the missing number. 