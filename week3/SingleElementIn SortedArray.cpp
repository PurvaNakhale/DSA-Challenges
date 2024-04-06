// You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once.

// Return the single element that appears only once.

// Your solution must run in O(log n) time and O(1) space.

int singleElement(vector<int>& nums, int s, int e){
        int mid = (s+e)/2;

        if(s >= e){
            return nums[mid];
        }

        if(mid%2==0){
            if(nums[mid] == nums[mid+1]){
                return singleElement(nums, mid+1, e);
            }
            else{
                return singleElement(nums, s, mid);
            }
        }
        else{
            if(nums[mid] == nums[mid-1]){
                return singleElement(nums, mid+1, e);
            }
            else{
                return singleElement(nums, s, mid);
            }
        }
        return 0;
       
    }

    int singleNonDuplicate(vector<int>& nums) {

       return singleElement(nums, 0, nums.size()-1);

    }