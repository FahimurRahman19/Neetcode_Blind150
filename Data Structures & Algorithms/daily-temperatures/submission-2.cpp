class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        vector<int>res;

        for(int i=0;i<temp.size();i++){

 int cnt=0;
      for (int j =i+1;j<temp.size();j++){
        if(temp[j]>temp[i]){cnt=(j-i); break;}


      }
      res.push_back(cnt);



            
        }

        return res;
        
    }
};
