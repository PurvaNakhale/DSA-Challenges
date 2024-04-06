 int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n==0){
            return 0;
        }
        sort(nums.begin(), nums.end());
        int currLen = 1;
        int maxLen = 0;

        for(int i=1; i<n; i++){
                if(nums[i] == nums[i-1] + 1){
                    currLen++;
                }
            else if(nums[i] != nums[i-1]){
                maxLen = max(currLen, maxLen);
                currLen = 1;
            }
        }

        maxLen = max(currLen, maxLen);

        return maxLen;     
    }