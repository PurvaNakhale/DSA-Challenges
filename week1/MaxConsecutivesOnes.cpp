int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int maxLen = 0;
        for(int i=0; i<nums.size(); i++){
            
            if(nums[i]==1){
                count++;
            }
            else if(nums[i]!=1){
                count = 0;
            }

            maxLen = max(maxLen, count);
        }

        return maxLen;
    }