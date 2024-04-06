 vector<long long> lcmAndGcd(long long A , long long B) {
        
        vector<long long> ans;
        
        long long gcd = __gcd(A,B);
        
        long long lcm = A*B / gcd;
        
        ans.push_back(lcm);
        ans.push_back(gcd);
        
        return ans;
    }