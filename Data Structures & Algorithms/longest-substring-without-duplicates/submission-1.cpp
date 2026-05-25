class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      vector<char>hash(256,false);

      int l =0;

      int mx=0;

      for (int i=0;i<s.size();i++){

        while(hash[s[i]]){

          hash[s[l]]=false;
          l++;
          




        }


        hash[s[i]]=true;
        mx=max(mx,(i-l+1));






      }

      return mx;



      

      
        
    }
};
