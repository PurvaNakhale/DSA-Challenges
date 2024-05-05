int remove_duplicate(int a[],int n){
        // code here
        int i = 0, j = 1;
        int cnt = 0;
        while(i<n && j<n){
            if(a[i] != a[j]){
                a[i+1] = a[j];
                i++;
            }
            j++;
        }
        
        int ans = i+1;;
        
        
        return ans;
        
    }