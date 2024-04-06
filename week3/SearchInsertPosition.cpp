// Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

// You must write an algorithm with O(log n) runtime complexity.


int searchInsert(vector<int>& nums, int target) {
        int s = 0, e = nums.size()-1;

        if(target > nums[e]) return e+1;

        while(s<=e){
            int mid = s + (e-s)/2;
            if(nums[mid] == target) return mid;
            else if(nums[mid] > target) e = mid - 1;
            else s = mid + 1;
        }
        return s;
    }