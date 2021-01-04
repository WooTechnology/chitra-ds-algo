class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       if (nums.size()<=1) return false;
    
        // method 1
        sort(nums.begin(),nums.end());
        for(int i=0; i<nums.size()-1;i++){
            if(nums[i] == nums[i+1]) return true;
        }
        return false;
        
        //method 2
        set<int> s (nums.begin(),nums.end()); // set will only contain unique elements
        return nums.size() > s.size();  // if same size i.e no duplicate, if size is greater then it contains duplicates
        
        //method 3
        unordered_set<int> u_set;
        for(int i =0;i<nums.size(); i++)
        {
            if(u_set.count(nums[i]))   // if its present in the u_set then return true
                return true;
            else
                u_set.insert(nums[i]); // not present so insert element
        }
        return false;
    }
};