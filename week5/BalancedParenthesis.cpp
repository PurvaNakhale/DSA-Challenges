class Solution
{
    public:
    void generateParenthesis(vector<string> &output, string s, int open, int close){
        if(open == 0 && close == 0){
            output.push_back(s);
        }
        
        if(open > 0){
            s.push_back('(');
            generateParenthesis(output, s, open-1, close);
            s.pop_back();
        }
        
        if(close > open){
            s.push_back(')');
            generateParenthesis(output, s, open, close-1);
        } 
    }
    
    vector<string> AllParenthesis(int n) 
    {
        // Your code goes here 
        vector<string> output;
        string s = "";
        generateParenthesis(output, s, n, n);
        
        return output;
    }
};