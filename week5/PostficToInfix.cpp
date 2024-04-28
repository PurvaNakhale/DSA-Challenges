
class Solution {
  public:
    string postToInfix(string exp) {
        // Write your code here
        stack<string> s;
        string infix;
        
        for(int i=0; i<exp.size(); i++){
            if(isalnum(exp[i])){
                 s.push(string(1, exp[i]));
            }
            else{
                string top2 = s.top();
                s.pop();
                string top1 = s.top();
                s.pop();
                
                s.push('(' + top1 + exp[i] + top2 + ')');
            }
        }
        
        
        return s.top();
    }
    
    
};