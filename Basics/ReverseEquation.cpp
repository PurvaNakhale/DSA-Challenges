 string reverseEqn (string s)
        {
            stack<string> store;
            string ans = "";
            string temp = "";
            
            int length = s.length();
            
            for(int i=0; i<length; i++){
                if(s[i]=='*' || s[i]=='+' || s[i]=='-' || s[i]=='/'){
                    store.push(temp);
                    temp = "";
                    temp += s[i];
                    store.push(temp);
                    temp = "";
                }
                else{
                    temp += s[i];
                }
            }
            store.push(temp);
            
            while(!store.empty()){
                ans += store.top();
                store.pop();
            }
            
            return ans;
        }