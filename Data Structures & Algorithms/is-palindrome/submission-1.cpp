class Solution {
public:
    bool isPalindrome(string s) {
        for(auto &c : s){c=tolower(c); }

        vector<char>r,r1;

        for(int i =0;i<s.size();i++){

 char c=s[i];
 if((c>='0' and c<='9') or  (c>='a' and c<='z'))r.push_back(c);


        }
        r1=r;
        reverse(r.begin(),r.end());
        

        return r==r1;

        
    }
};
