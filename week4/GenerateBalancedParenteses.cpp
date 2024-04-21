// Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.
// Input: n = 3
// Output: ["((()))","(()())","(())()","()(())","()()()"]

class Solution {
public:
    void findPermutations(int open, int close, string output, vector<string>& ans){
        if(open == 0 && close == 0){
            ans.push_back(output);
        }

         if(open != 0){
            output.push_back('(');
            findPermutations(open-1, close, output, ans);
            output.pop_back();
        }

        if(close > open){
            output.push_back(')');
            findPermutations(open, close-1, output, ans);
        }
 
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string output = "";
        int open = n;
        int close = n;

        findPermutations(open, close, output, ans);

        return ans;
    }
};