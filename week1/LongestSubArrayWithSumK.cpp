int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        int ans = 0;
        for(int i=0; i<N; i++){
            for(int j=i; j<N; j++){
                int sum = 0;
                for(int k=i; k<=j; k++){
                    sum += A[k];
                }
                
                if(sum == K){
                    ans = max(ans, j-i+1);
                }
            }
        }
        
        return ans;
    
    } 