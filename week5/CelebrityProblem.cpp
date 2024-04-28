class Solution 
{
    public:
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
         stack<int> st;
        for(int i = 0;i < n ;i++){
            st.push(i);
        }
        while(st.size()>1){
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            if(M[a][b] == 0)
                st.push(a);
            else if(M[b][a] == 0)
                st.push(b);
        }
        if(st.size()==0)
            return -1;
        int temp = st.top();
        for(int i = 0 ;i<n;i++){
            if(M[temp][i]==1)
                return -1;
        }
        for(int i = 0 ;i<n;i++){
            if(temp == i)
                continue;
            if(M[i][temp]==0)
                return -1;
        }
        return temp;
    }
};