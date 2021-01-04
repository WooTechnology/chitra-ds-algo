class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans; // storing merged intervals
        if(intervals.size() == 0) return ans; // edge case
        sort(intervals.begin(),intervals.end()); // sorting intervals O(nlogn)
        vector<int> temp = intervals[0]; // temp vector,i.e temp interval for comparing every other interval with
        for(auto it: intervals){ // traversing the intervals,i.e. given vector
            if( it[0] <= temp[1]){ // comparing first element of second interval with second element of first interval
                temp[1] = max(it[1], temp[1]);
            }
            else {
                ans.push_back(temp);
                temp = it;
            }
        }
        ans.push_back(temp);
        return ans;
    }
    
};