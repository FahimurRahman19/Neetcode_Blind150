class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        map<int,int>mp;

        
        for(int i =0;i<nums.size();i++){
            mp[nums[i]]++;
           


        }

        vector<pair<int,int>>p;
     

        vector<int>v;
        for(auto it:mp){
           p.push_back({it.second,it.first});
        }

        sort(p.begin(),p.end(),greater<>());

        vector<int>res;

        for(int i =0;i<k;i++){
            res.push_back(p[i].second);

        }



        return res;
        
    }
};
