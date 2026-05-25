class Solution {
public:
//lets  try with built in with two pointer
    bool isPalindrome(string s) {

        int l=0; int r= s.size()-1;
       
      while(l<r){
            // char c=tolower(s[l]);
            // char d =tolower(s[r]);

            // if(!isalnum(c) and l<r){
            //     l++;

            // }

            // if(!isalnum(d) and r>l){

            //     r--;

            // }

            //  if (c!=d and isalnum(c)==isalnum(d))return false;
            char c,d;
            if(!isalnum(s[l])){l++;continue;}
             if(!isalnum(s[r])){r--;continue;}


            if(isalnum(s[l])){ c=tolower(s[l]);l++;}
            if(isalnum(s[r])) {d=tolower(s[r]); r--;}
            if(c!=d)return false;
           















        }

        return true;
        
    }
};
