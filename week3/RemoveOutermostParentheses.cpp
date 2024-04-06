// Input: s = "(()())(())(()(()))"
// Output: "()()()()(())"

string removeOuterParentheses(string s) {
        string ans = "";
        int count = 0;

        for(char ch : s){
            if(ch == '('){
                if(count==0){
                    count++;
                }
                else{
                    ans += ch;
                    count++;
                }
            }
            else if(ch == ')'){
                if(count>1){
                    ans += ch;
                    count--;
                }
                else{
                    count--;
                }
            }
        }

        return ans;

    }