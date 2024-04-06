// Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

// If target is not found in the array, return [-1, -1].

// You must write an algorithm with O(log n) runtime complexity.


class Solution {

int firstOccurance(vector<int>& nums, int target){
    int s = 0, e = nums.size()-1;
    int firstOcc = -1;

        while(s <= e){
            int mid = (s+e)/2;

            if(nums[mid] == target){
                firstOcc = mid;
                e = mid - 1;
            }
            else if(nums[mid] < target){
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
            
        }

    return firstOcc;
}

int lastOccurance(vector<int>& nums, int target){
    int s = 0, e = nums.size()-1;
    int lastOcc = -1;

        while(s <= e){
            int mid = (s+e)/2;

            if(nums[mid] == target){
                lastOcc = mid;
                s = mid + 1;
            }
            else if(nums[mid] < target){
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
            
        }

    return lastOcc;
}


public:
    vector<int> searchRange(vector<int>& nums, int target) {

        vector<int> ans;

        int firstOcc = firstOccurance(nums, target);
        int lastOcc = lastOccurance(nums, target);

        ans.push_back(firstOcc);
        ans.push_back(lastOcc);

        return ans;

    }
};