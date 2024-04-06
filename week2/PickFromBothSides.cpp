int Solution::solve(vector<int> &A, int B) {
    
    int sum = 0;
    int n = A.size();
    
    for(int i=0; i<B; i++){
        sum += A[i];
    }
    
    int maxSum = sum;
    
    int x  = B;
    
    while(B>=0){
        sum -= A[B-1];
        sum += A[n-1];
        maxSum = max(maxSum, sum);
        B--;
        n--;
    }
    
    
    return maxSum;  
    
}