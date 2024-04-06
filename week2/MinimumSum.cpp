 string sumOf(int a, int b){
        int d1, d2;
        int carry = 0;
        string sum = 0;
        
        while(a > 0 && b > 0){
            d1 = a%10; 
            d2 = b%10;
            int add = d1+d2+carry;
            add = add % 10;
            carry = add / 10;
            
            sum = to_string(add) + sum;
            a = a/10;
            b = b/10;
        }
        
        while(a > 0 ){
            d1 = a%10; 
            int add = d1+carry;
            add = add % 10;
            carry = add / 10;
            
            sum = to_string(add) + sum;
            a = a/10;
        }
        
        while(b > 0){ 
            d2 = b%10;
            int add = d2+carry;
            add = add % 10;
            carry = add / 10;
            
            sum = to_string(add) + sum;
            b = b/10;
        }
        
        if(carry != 0){
            sum = to_string(carry) + sum;
        }
        
        return sum;
        
    }
    
    string solve(int arr[], int n) {
        int num1 = 0;
        int num2 = 0;
        
        sort(arr, arr+n);
        
        for(int i=0; i<n; i++){
            if(i%2==0){
                num1 += arr[i];
            }
            else{
                num2 += arr[i];
            }
        }
        
        string ans = sumOf(num1, num2);
        
        return ans;
    }