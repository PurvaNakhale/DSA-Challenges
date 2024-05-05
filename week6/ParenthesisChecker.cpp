class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        stack<char> s;
        int n = x.length();
        
        for(char c : x){
            if(c == '(' || c == '{' || c == '['){
                s.push(c);
            }
            else {
                // if(s.empty()){
                //     return false;
                // }
                if((c == ')' && s.top() == '(') || (c == '}' && s.top() == '{') || (c == ']' && s.top() == '[')){
                    s.pop();
                }
            }
            
        }
        
        return s.empty();
    }

};