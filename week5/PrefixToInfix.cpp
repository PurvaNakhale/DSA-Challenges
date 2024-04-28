class Solution {
  public:
    string preToInfix(string pre_exp) {
        // Write your code here
        reverse(pre_exp.begin(), pre_exp.end());
        
        stack<string> s;
        string post_exp;
        
        for(int i=0; i<pre_exp.size(); i++){
            if(pre_exp[i] == '+' || pre_exp[i] == '-' || pre_exp[i] == '*' || pre_exp[i] == '/'){
                string top1 = s.top();
                s.pop();
                string top2 = s.top();
                s.pop();
                
                post_exp = '(' + top1 + pre_exp[i] + top2 + ')';
                s.push(post_exp);
            }
            else{
                s.push(string(1, pre_exp[i]));
            }
        }
        
        return post_exp;
    }
}; 