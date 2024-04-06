string armstrongNumber(int n){
       int temp = n;
       int sum = 0;
       while(n!=0){
           int digit = n % 10;
           n = n/10;
           sum += pow(digit,3);
       }
       
       if(sum == temp){
           return "Yes";
       }
       else{
           return "No";
       }
    }