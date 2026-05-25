class Solution {
public:
    int characterReplacement(string s, int k) {

  int l=0; int r=0;
  unordered_map<int,int>mp;
  int maxfr=INT_MIN;

  int res=INT_MIN;

  for(int i=0;i<s.size();i++){
    mp[s[i]]++;
    maxfr=max(maxfr,mp[s[i]]);

    if(i+1-l-maxfr>k){
      mp[s[l]]--;
      l++;
      


    }

    res=max(res,(i+1-l));
    







  }


  return res;

  






        
    }
};
