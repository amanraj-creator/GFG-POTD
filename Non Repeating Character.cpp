class Solution {
  public:
    // Function to find the first non-repeating character in a string.
    char nonRepeatingChar(string &s) {
        //O(1) space
        
/*    // Create a frequency array for 26 lowercase Latin letters
    vector<int> freq(26, 0);
    
    // Count the frequency of each character
    for (char c : s) {
        freq[c - 'a']++;
    }
    // Find the first character with a frequency of 1
    for (char c : s) {
        if (freq[c - 'a'] == 1) {
            return c;
        }
    }
    // If no non-repeating character is found
    return '$';
    
  */
    
    // USING MAP: O(n) space
    
     map<char,int>m;
       for(int i=0;i<s.size();i++)
       {
           m[s[i]]++;
       }
      for(int i=0;i<s.size();i++)
      {
          if(m[s[i]]==1) return s[i];
      }
       return '$';
    }
};
