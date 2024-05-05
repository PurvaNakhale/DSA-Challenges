class Solution {
public:
    int romanToInt(string s) {
        int n = s.length();
        map<char, int> mp = {
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000}
        };
    
        stack<int> st;
        for(int i=0; i<n; i++){
            if(st.empty() || st.top() >= mp[s[i]]){
                st.push(mp[s[i]]);
            }
            else{
                int num = mp[s[i]] - st.top();
                st.pop();
                st.push(num);
            }
        }

        int ans = 0;
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }

        return ans;
    }
};