// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.
// There is only one duplicate number in nums, return this duplicate number.

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //if(nums.size() < 2) return INT_MIN;
        // Find the intersection point of the two pointers
        int rabbit = nums[0],tortoise = nums[0];
        do{
            rabbit = nums[nums[rabbit]];
            tortoise = nums[tortoise];
        }while(rabbit != tortoise);
        // Find the "entrance" to the cycle.
        tortoise = nums[0];
        while(tortoise!=rabbit){
            rabbit = nums[rabbit];
            tortoise = nums[tortoise];
        }
        return rabbit;
    }
};