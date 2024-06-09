class Solution {
  public:
    bool isBSTTraversal(vector<int>& nums) {
        // your code here
        int n = nums.size();
        for(int i=0; i<n-1; i++){
            if(nums[i+1] <= nums[i]){
                return false;
            }
        }
        
        return true;
    }
};