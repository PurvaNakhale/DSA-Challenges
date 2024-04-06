vector<int> Solution::solve(vector<int> &A) {
    vector<int> ans;
    int n = A.size();
    
    for(int i=0; i<n; i++){
        ans.push_back(A[i]*A[i]);
    }
    
    sort(ans.begin(), ans.end());
    
        
    return ans;
}