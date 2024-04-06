// A string is called a happy prefix if is a non-empty prefix which is also a suffix (excluding itself).

// Given a string s, return the longest happy prefix of s. Return an empty string "" if no such prefix exists.

string longestPrefix(string s) {
        int n = s.length();
        vector<int> lps(n,0);
        int pre = 0, suff = 1;

        while(suff < n){
            if(s[pre] == s[suff]){
                lps[suff] = pre + 1;
                pre++;
                suff++;
            }
            else{
                if(pre == 0){
                    lps[suff] = 0;
                    suff++;
                }
                else{
                    pre = lps[pre-1];
                }
            }
        }

        return s.substr(0, lps[n-1]);
};