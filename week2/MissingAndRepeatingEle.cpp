vector<int> count(n+1, 0);
       vector<int> ans(2);
       
       int duplicate = -1, missing = -1;
       
       for(int i=0; i<n; i++){
           count[arr[i]]++;
       }
       
       for(int i=1; i<=n; i++){
           if(count[i]==0){
               missing = i;
           }
           else if(count[i]==2){
               duplicate = i;
           }
       }
       
       ans[0] = duplicate;
       ans[1] = missing;
       
       return ans;