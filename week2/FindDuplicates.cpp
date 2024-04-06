int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        int x;
        vector<int> v(n,0);
        
        for(int i=0; i<n; i++){
            v[nums[i]]++;
        }
        
        for(int i=0; i<v.size(); i++){
            if(v[i]>1){
                x = i;
                break;
            }
        }
        return x;
        
        
    }