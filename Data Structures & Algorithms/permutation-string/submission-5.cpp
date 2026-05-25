class Solution {
public:
    bool checkInclusion(string s1, string s2) {
     
     if(s2.size()<s1.size())return  false;

     int n =s1.size();

     unordered_map<char,int>mp;

     for(int i=0;i<s1.size();i++){
      mp[s1[i]]++;
     }

     int l =0;

unordered_map<char,int>mp1;
     for (int i =0;i<s2.size();i++){


       mp1[s2[i]]++;

      if(i>=n){
        mp1[s2[i-n]]--;

        if(mp1[s2[i-n]]==0)mp1.erase(s2[i-n]);


      }

      if(mp==mp1)return true;

      
     }


      

      return false;
        
    }
};
