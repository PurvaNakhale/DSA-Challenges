   int countPrimes(int n) {
        if(n==0 || n==1){
            return 0;
        }

        vector<bool> prime(n+1, true);
        long long count = 0;

        for(long long  i=2; i<n; i++){
            if(prime[i]){
                for(long long j=i*i; j<n; j+=i){
                    prime[j]=false;
                }
            }
        }

        for(int i=2; i<n; i++){
            if(prime[i]){
                count++;
            }
        }

        return count;

    }