class Solution
{
    public:
    //Function to find the smallest window in the string s consisting
    //of all the characters of string p.
    string smallestWindow (string s, string p)
    {
        // Your code here
        int i = 0, j = 0, count = 0, startIndex = -1, minLen = INT_MAX;
        int n = s.length(), m = p.length();
        vector<int> mp(26, 0);
        
        for (char ch : p) {
          mp[ch - 'a']++;
          if (mp[ch - 'a'] == 1) {
              count++;
            }
        }
        
        while (j < n) {
           mp[s[j] - 'a']--;
           
           if (mp[s[j] - 'a'] == 0) {
              count--;
            }
            
            while (count == 0) {
              if (j - i + 1 < minLen) {
                  minLen = min(minLen, j - i + 1);
                  startIndex = i;
                }
                mp[s[i] - 'a']++;
                if (mp[s[i] - 'a'] == 1) {
                  count++;
                }
                i++;
            }
            j++;
        }
        
        return minLen == INT_MAX ? "-1" : s.substr(startIndex, minLen);
    }
};