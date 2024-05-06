class Solution
{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
        // Your code here
        
        priority_queue <long long, vector<long long>, greater<long long>> minHp;
        long long totalCost = 0;
        
        for(int i=0; i<n; i++){
            minHp.push(arr[i]);
        }
        
        while(minHp.size() > 1){
            long long first = minHp.top();
            minHp.pop();
            long long  second = minHp.top();
            minHp.pop();
            
            long long cost = first + second;
            totalCost += cost;
            minHp.push(cost);
        }
        
        return totalCost;
    }
};