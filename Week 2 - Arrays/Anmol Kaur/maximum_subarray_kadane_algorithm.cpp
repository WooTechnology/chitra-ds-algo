// Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0]; 
        int max_sum = nums[0],max_last = nums[0]; // initialising with first element allows to return negative answers incase array contains all negatives
        for(int i = 1; i<n; i++){
            max_last = max(nums[i], nums[i]+ max_last);
            max_sum = max(max_sum, max_last);
        }
        return max_sum;
    }
};

