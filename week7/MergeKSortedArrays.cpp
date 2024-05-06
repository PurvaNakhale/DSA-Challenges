class Solution
{
    public:
    //Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
        //code here
        priority_queue<int, vector<int>, greater<int>> minHp;
        vector<int> mergedArr;
        
        for(int i=0; i<K; i++){
            for(int j=0; j<arr.size(); j++){
                minHp.push(arr[i][j]);
            }
        }
        
        while(!minHp.empty()){
            mergedArr.push_back(minHp.top());
            minHp.pop();
        }
        
        return mergedArr;
    }
};