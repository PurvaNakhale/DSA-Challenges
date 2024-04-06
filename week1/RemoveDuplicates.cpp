int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int i = 0, j = 1, k = 0;
        while(i<=n-1 && j<=n-1){
            if(nums[i]!=nums[j]){
                int temp = nums[i+1];
                nums[i+1] = nums[j];
                nums[j] = temp;
                i++;
                k++;
            }
            j++;
        }

        return k+1;
    }