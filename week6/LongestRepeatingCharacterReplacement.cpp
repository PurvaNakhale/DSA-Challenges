class Solution {
public:
    int characterReplacement(string s, int k) {
        map<char,int> m;
        int n = s.size();
        int ans = 0;
        int i = 0, j = 0;
        int maxFreq = 0;
        
        while (j < n) {
            m[s[j]]++;
            maxFreq = max(maxFreq, m[s[j]]);
            
            while (j - i + 1 - maxFreq > k) {
                m[s[i]]--;
                if (m[s[i]] == 0)
                    m.erase(s[i]);
                i++;
            }
            
            ans = max(ans, j - i + 1);
            j++;
        }
        
        return ans;
    }
};