class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
    //   Your code here
      int n = S.length()-1;
      int h[26]={0};
       
      for(int i=0; i<n; i++){
          h[S[i] - 'a']++;
      }
      bool flag = false;
       
      for(int i=0; i<n; i++){
          if(h[S[i] - 'a'] == 1){
              flag = true;
              return S[i];
            }
        }
      
        if(!flag){
            return '$';
        }
       
    }

};