 int commonFactors(int a, int b) {
        int n;
        int count = 1;
        if(a>b){
            n = a;
        }
        else{
            n = b;
        }

        for(int i=2; i<=n; i++){
            if(a%i==0 && b%i==0){
                count++;
            }
        }

        return count;
    }