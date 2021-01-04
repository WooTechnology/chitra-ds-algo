// Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.
// Follow up: Could you implement the O(n) solution? 

class Solution {  
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        if(nums.size() == 1) return 1;
        if(nums.size() == 2) return abs(nums[0] - nums[1])== 1? 2:1;
        int longestStreak = 0;
        
        unordered_set<int> u_set;
        for(int num: nums) u_set.insert(num);
        
        for(int i: nums){
           if( !u_set.count(i-1)){
             int currentNumber = i;
             int currentStreak = 1;
               
             while (u_set.count(currentNumber+1)) {
                 currentNumber ++; 
                 currentStreak ++;
            }
               longestStreak = max(longestStreak, currentStreak); 
           }
        }
        
         return longestStreak;
    }
};

// Input: nums = [100,4,200,1,3,2]
// Output: 4
// Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.
// Example 2:

// Input: nums = [0,3,7,2,5,8,4,6,0,1]
// Output: 9