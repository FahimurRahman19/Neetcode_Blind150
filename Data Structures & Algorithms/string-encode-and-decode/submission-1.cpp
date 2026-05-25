class Solution {
public:

    string encode(vector<string>& strs) {

  string en="";

  for(int i =0;i<strs.size();i++){
  
   
 en+=to_string(strs[i].size())+"#"+strs[i];


  }
  return en;



    }

    vector<string> decode(string s) {

     vector<string >res;
   int i =0;
      while(i<s.size()){
  
 
string c="";
   while(s[i]!='#'){
 c+=s[i];
 i++;

     
   }

   int n =stoi(c);
i++;
   res.push_back(s.substr(i,n));
   i+=n;




      }

      return res;


    }
};
