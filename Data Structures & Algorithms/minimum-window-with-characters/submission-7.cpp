class Solution {
public:
    string minWindow(string s, string t) {
     
     string ans="";
     unordered_map<char,int>t_m;
      for (int i=0;i<t.size();i++)t_m[t[i]]++;


       
       int len=INT_MAX;

      for (int i=0;i<s.size();i++){


        for (int j =i;j<s.size();j++){
           unordered_map<char,int>s_m;
          for (int k=i;k<=j;k++)s_m[s[k]]++;
          bool f=true;
          for (auto it:t_m){
            if(s_m[it.first]<it.second){f=false;   break;}
          }

          if(f and j-i+1<len  ){

            len =j-i+1;
            ans=s.substr(i,j-i+1);



          }

        

        }






      }

       return ans;

      
        
    }
};
