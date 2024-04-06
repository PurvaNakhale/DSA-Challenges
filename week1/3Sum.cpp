 vector<vector<int>> threeSum(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        int n = nums.size();
        vector<vector<int>> ans;

        for(int i=0; i<n; i++){
            if(nums[i]>0){
                break;
            }

            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }

            int l = i+1, h = n-1;
            int sum = 0;

            while(l<h){
                sum = nums[i]+nums[l]+nums[h];
                if(sum < 0){
                    l++;
                }
                else if(sum > 0){
                    h--;
                }
                else{
                    ans.push_back({nums[i], nums[l], nums[h]});
                    int last_low_occurance = nums[l];
                    int last_high_occurance = nums[h];

                    while(l<h && nums[l] == last_low_occurance){
                        l++;
                    }
                    while(l<h && nums[h] == last_low_occurance){
                        h--;
                    }
                }
            }
        }

        return ans;
    }