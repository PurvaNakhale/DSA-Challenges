
class Solution 
{
    public:
    static bool cmp(Job a, Job b){
       return a.profit > b.profit;
    }
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        sort(arr, arr+n, cmp);
        
        int maxiDeadline = INT_MIN;
        for(int i=0; i<n; i++){
            maxiDeadline = max(maxiDeadline, arr[i].dead);
        }
        
        vector<int> schedule(maxiDeadline+1, -1);
        
        int count = 0;
        int maxProfit = 0;
        
        for(int i=0; i<n; i++){
            int currProfit = arr[i].profit;
            int currJobId = arr[i].id;
            int currDead = arr[i].dead;
            
            for(int k = currDead; k>0; k--){
                if(schedule[k] == -1){
                    count++;
                    maxProfit += currProfit;
                    schedule[k] = currJobId;
                    break;
                }
            }
        }
        
        vector<int> ans;
        ans.push_back(count);
        ans.push_back(maxProfit);
        return ans;
    } 
};