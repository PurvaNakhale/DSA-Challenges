class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.length();
        map<char, int> mp;
        int j = 0, count = 0;

        for(int i=0; i<n; i++){
            mp[s[i]]++;

            while(mp['a'] >= 1 && mp['b'] >= 1 && mp['c'] >= 1){
                count += (n-i);
                mp[s[j]]--;
                j++;
            }
        }

        return count;
    }
};