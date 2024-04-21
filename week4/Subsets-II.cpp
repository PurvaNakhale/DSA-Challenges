// Given an integer array nums that may contain duplicates, return all possible 
// subsets (the power set).
// The solution set must not contain duplicate subsets. Return the solution in any order.

class Solution {
public:
    void findSubsets(int index, vector<int>& nums, vector<int> output, vector<vector<int>>& ans, bool flag){
        if(index == nums.size()){
            ans.push_back(output);
            return;
        }
        findSubsets(index+1, nums, output, ans, false);
        if(index > 0 && nums[index]==nums[index-1] && (!flag)) return;

        output.push_back(nums[index]);
        findSubsets(index+1, nums, output, ans, true);

        output.pop_back();
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        vector<int> output;

        findSubsets(0, nums, output, ans, false);

        return ans;
    }
};