class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
       // Your code here
       stack<int> s;
       vector<int> span;
       
       for(int i=0; i<n; i++){
            while(!s.empty() && price[s.top()] <= price[i]){
                s.pop();
            }
            if(s.empty()){
                span.push_back(i+1);
            }
            else{
               span.push_back(i - s.top());
            }
           s.push(i);
       }
       
       return span;
    }
};