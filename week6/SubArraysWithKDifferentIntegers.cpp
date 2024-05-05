class Solution {
public:
    int subArrays(vector<int>& nums, int k){
        int i= 0, j = 0;
        int count = 0;
        map<int, int> mp;

        while(j < nums.size()){
            mp[nums[j]]++;

            while(mp.size() > k){
                mp[nums[i]]--;
                if(mp[nums[i]]==0){
                    mp.erase(nums[i]);
                }
                i++;
            }
            count += j-i+1;
            j++;
        }

        return count;
    }

    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return subArrays(nums, k) - subArrays(nums, k-1);
    }
};