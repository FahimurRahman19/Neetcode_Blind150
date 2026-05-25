class Solution {
public:

    string encode(vector<string>& strs) {

        string en="";

        for(int i =0;i<strs.size();i++){
            int n =strs[i].size();

        en+=to_string(n)+"#"+strs[i];
 


        }

        return en;


    }

    vector<string> decode(string s) {
       

         vector<string>res;
    
  for (int i =0;i<s.size();){


   string c="";

        while(s[i]!='#'){c+=s[i];i++;}
        int n =stoi(c);

        if(s[i]=='#'){

            res.push_back(s.substr(i+1,n));

         i+=n+1;



        }


  }


  return res;



       

    }
};
