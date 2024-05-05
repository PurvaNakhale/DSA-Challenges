class Solution {
public:
    int solve(vector<int>& nums, int k){
        int i = 0, j = 0;
        int oddCnt = 0, cnt = 0;

        while(j < nums.size()){
            if(nums[j] % 2 == 1){
                oddCnt++;
            }

            while(oddCnt > k){
                if(nums[i] % 2 == 1){
                    oddCnt--;
                }
                i++;
            }
            cnt += j-i+1;
            j++;
        }

        return cnt;
    }

    int numberOfSubarrays(vector<int>& nums, int k) {
        return solve(nums, k) - solve(nums, k-1);
    }
};