vector <int> max_of_subarrays(int *arr, int n, int k)
    {
       vector <int> ans;
        deque <int> q;
        
        for(int i=0;i<k;i++)
        {
            while(!q.empty() and arr[i]>q.front())
            {
                q.pop_front();
                
            }
            while(!q.empty() and arr[i]>q.back())
            {
                q.pop_back();
                
            }
            q.push_back(arr[i]);
            
        }
        ans.push_back(q.front());
        for(int i=k;i<n;i++)
        {
            if(arr[i-k]==q.front()) q.pop_front();
            while(!q.empty() and arr[i]>q.front())
            {
                q.pop_front();
                
            }
            while(!q.empty() and arr[i]>q.back())
            {
                q.pop_back();
                
            }
            q.push_back(arr[i]);
            ans.push_back(q.front());
            
        }
        return ans;
    }