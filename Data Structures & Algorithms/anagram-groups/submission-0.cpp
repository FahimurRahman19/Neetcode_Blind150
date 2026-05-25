class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        // sort(strs.begin(),strs.end());
        // vector<string>res;
        // res.push_back(strs[0]);



        // for(int  i=1;i<strs.size();i++){
        //     if(strs[i]==strs[i-1])res

    map<string,vector<string>>mp;


    for(int i =0;i<strs.size();i++){
        string s=strs[i];
        sort(s.begin(),s.end());

        mp[s].push_back(strs[i]);


    }

    int p=mp.size();

  vector<vector<string>>res;
    for(auto it:mp){
 
  res.push_back(it.second);


    }






        

      
 return res;












        
    }
};
