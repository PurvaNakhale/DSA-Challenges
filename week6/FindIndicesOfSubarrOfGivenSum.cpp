vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
        int i = 0, j = 0;
        int sum = 0;
        vector<int> ans;
    
        
        while(i<n && j<n){
            sum += arr[j];
            while(sum > s && i<j){
                sum -= arr[i];
                i++;
            }
            if(sum == s){
                ans.push_back(i+1);
                ans.push_back(j+1);
                break;
            }
            j++;
        }
        
        if(ans.size() == 0 && j > i){
            ans.clear();
            ans.push_back(-1);
        }
        
        
        return ans;
    }