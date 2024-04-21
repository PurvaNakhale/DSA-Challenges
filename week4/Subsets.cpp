// Given an integer array nums of unique elements, return all possible subsets (the power set).
// The solution set must not contain duplicate subsets. Return the solution in any order.

class Solution {
public:
    void findSubsets(vector<int> &nums, vector<int> output, int index, vector<vector<int>>& ans){
        if(index == nums.size()){
            ans.push_back(output);
            return;
        }

        findSubsets(nums, output, index+1, ans);
        output.push_back(nums[index]);
        findSubsets(nums, output, index+1, ans);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> output;
        vector<vector<int>> ans;

        findSubsets(nums, output, 0, ans);

        return ans;
    }

};