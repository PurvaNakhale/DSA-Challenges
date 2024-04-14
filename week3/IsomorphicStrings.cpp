// Given two strings s and t, determine if they are isomorphic.

// Two strings s and t are isomorphic if the characters in s can be replaced to get t.

// All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.

bool isIsomorphic(string s, string t) {
        vector<int> IndexS(200, 0);
        vector<int> IndexT(200, 0);
        int len  = s.length();

        if(len != t.length()) return false;

        for(int i=0; i<len; i++){
            if(IndexS[s[i]] != IndexT[t[i]]) return false;
            IndexS[s[i]] = i+1;
            IndexT[t[i]] = i+1;
        }

        return true;
        
    }