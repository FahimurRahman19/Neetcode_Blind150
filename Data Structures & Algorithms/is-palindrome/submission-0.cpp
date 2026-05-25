class Solution {
public:
    bool isPalindrome(string s) {
        vector<char>v1,v2;
        int n =s.size(); int j ;

        for (auto &c:s){
            c=tolower(c);


        }

        for(int i=0;i<s.size();i++){
            char c =(s[i]);
         if((c>='0' and c<='9') or (c>='a' and c<='z')) v1.push_back(c);

  j =--n;
  char d=s[j];

 if((d>='0' and d<='9') or (d>='a' and d<='z')) v2.push_back(d);

         



        }
return  v1==v2;

        
        
    }
};
