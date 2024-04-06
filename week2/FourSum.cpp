vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for(int i=0; i<n-3; i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            for(int j=i+1; j<n-2; j++){
                if(j>(i+1) && nums[j]==nums[j-1]){
                continue;
            }
                int l = j+1;
                int h = n-1;
                int sum = 0;

                while(l < h){
                   long long int sum = nums[i];
                   sum += nums[j];
                   sum += nums[l];
                   sum += nums[h];

                   if(sum == target){
                       ans.push_back({nums[i],nums[j],nums[l],nums[h]});
                       int low = nums[l]; 
                       int high = nums[h]; 
                       l++;
                       h--;
                       while(l<h && nums[l] == low) l++;
                       while(l<h && nums[h] == high) h--;
                    }
                    else if(sum < target){
                       l++;
                    }
                    else if(sum > target){
                        h--;
                    }
                }
 
            }
        }

        return ans;
    }