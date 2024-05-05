class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int>mp;
        int i = 0, j = 0;
        int cnt = 0;
        int maxlen = 0;

        while(j < s.length()){
            mp[s[j]]++;

            if(mp.size() == j-i+1){
                maxlen = max(maxlen, j-i+1);
            }
            else if(mp.size() < j-i+1){
                while(mp.size() < j-i+1){
                    mp[s[i]]--;
                    if(mp[s[i]] == 0){
                        mp.erase(s[i]);
                    }
                    i++;
                }
            }
            j++;
        }

        return maxlen;
    }
};