   	long long int prime_Sum(int n){
   	    vector<int>vec(n+1,1);
        for(int i = 2 ; i*i <=n ; i++){
            for(int j = i*i ; j <=n ; j+=i){
                vec[j] = 0;                    
            }
        }
        long long int sum = 0;
        for(int i = 2 ; i<=n ; i++){
            if(vec[i] == 1)sum+=i;
        }
        return sum;
   	}    