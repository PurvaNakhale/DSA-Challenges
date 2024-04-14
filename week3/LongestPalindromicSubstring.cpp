// Given a string s, return the longest 
// palindromic
 
substring
 in s.

string longestPalindrome(string s) {
        int n = s.length();
        int st = 0, en = 0;
        int max_len = 0;

        for(int i=0; i<n; i++){
            int l = i, r = i;
            while(l>=0 && r<n){
                if(s[l]==s[r]){
                    l--;
                    r++;
                }
                else
                  break;
            }
            int len = r-l-1;
            if(len>max_len){
                max_len = len;
                st = l+1;
                en= r-1;
            }
        }

        for(int i=0; i<n; i++){
            int l = i, r = i+1;
            while(l>=0 && r<n){
                if(s[l]==s[r]){
                    l--;
                    r++;
                }
                else
                  break;
            }
            int len = r-l-1;
            if(len>max_len){
                max_len = len;
                st = l+1;
                en= r-1;
            }
        }
        return s.substr(st, max_len);


        
    }