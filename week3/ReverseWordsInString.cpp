// Given an input string s, reverse the order of the words.

// A word is defined as a sequence of non-space characters. The words in s will be separated by at least one space.

// Return a string of the words in reverse order concatenated by a single space.

// Note that s may contain leading or trailing spaces or multiple spaces between two words. The returned string should only have a single space separating the words. Do not include any extra spaces.

string reverseWords(string s) {
        stack<string> st;
        string word;
        string ans;

        for(char ch : s){
            if(ch == ' ' && word.length()){
                st.push(word);
                word = "";
            }
            else if(ch != ' '){
                word += ch;
            }
        }

        if(word.length()){
            ans += word;
        }
        else{
            ans = st.top();
            st.pop();
        }

        while(!st.empty()){
            ans += ' ' + st.top();
            st.pop();
        }

        return ans;

    }