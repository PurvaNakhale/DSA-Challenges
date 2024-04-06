int evenlyDivides(int N){
        int count = 0;
        int m = N;
        while(N!=0){
            int digit = N % 10;
             N = N / 10;
            if(digit == 0){
                continue;
            }
            if(m % digit == 0){
                count++;
            }
           
        }
        
        return count;
    }