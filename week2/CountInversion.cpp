long long int merge(long long arr[], long long s, long long mid, long long e){
        
        long long inv = 0;
        long long left = s;
        long long right = mid + 1;
        vector<long long> temp;
        
        while(left <= mid && right <= e){
            if(arr[left] <= arr[right]){
                temp.push_back(arr[left++]);
            }
            else{
                inv += mid - left + 1;
                temp.push_back(arr[right++]);
            }
        }
        
        while(left <= mid){
            temp.push_back(arr[left++]);
        }
        
        while(right <= e){
            temp.push_back(arr[right++]);
        }
        
        for(int i=s; i<=e; i++){
            arr[i] = temp[i-s];
        }
        
        return inv;
        
    }
    
    long long int mergeSort(long long arr[], long long s, long long e){
        
        
        long long int inv = 0;
        if(s<e){
            long long mid = (s+e)/2;
            inv += mergeSort(arr, s, mid);
            inv += mergeSort(arr, mid+1, e);
            inv += merge(arr, s, mid, e);
        }
        
        return inv;
    }
    
    long long int inversionCount(long long arr[], long long N)
    {
       long long int inv = mergeSort(arr, 0, N-1);
       
       return inv;
    }