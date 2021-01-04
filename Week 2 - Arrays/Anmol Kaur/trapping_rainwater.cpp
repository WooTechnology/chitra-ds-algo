// Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.

class Solution {
public:
    // two pointer approach time: O(n) , space O(1)
    int trap(vector<int>& height) {
        int n = height.size();
        if (n == 0 || n == 1) return 0;
        int left = 0, right = height.size() - 1; // pointers
        int ans = 0; 
        int left_max = 0, right_max = 0; // variables for comapring and updating
        while(left < right){
            if (height[left] < height[right]){
                height[left] >= left_max ? (left_max = height[left]) : ans += (left_max - height[left]);
                ++left;
            }
            else{
                height[right] >= right_max ? (right_max = height[right]) : ans += (right_max - height[right]);
                --right;
            }
        }
        return ans;
    }
};

// stroing left and right heights in vectors approach
class Solution {
public:
    int trap(vector<int>& height) {
        if(height.empty()) return 0;
        vector<int> left_max(height.size()), right_max(height.size());
        int result = 0, size = height.size();
        left_max[0] = height[0];
        for(int i = 1; i<size; i++){
            left_max[i] = max(left_max[i-1], height[i]);
        }
        right_max[size-1] = height.back();
        for(int i = size-2; i>=0; i--){
            right_max[i] = max(right_max[i+1], height[i]);
        }
        for(int i = 0; i<size; i++){
            result += min(left_max[i], right_max[i]) - height[i];
        }
        return result;
    }
};