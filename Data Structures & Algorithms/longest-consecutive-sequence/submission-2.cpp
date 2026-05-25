class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        sort(nums.begin(),nums.end());

        int n =nums.size();
        if(n==0){return 0;}

        int j =1;
        vector<int>v;
        v.push_back(j);
        for(int i =1;i<n;i++){
        if(nums[i]==nums[i-1])continue;
      if(nums[i]-nums[i-1]==1){j++;v.push_back(j);}
      else{
      j=1;}


        }

        sort(v.begin(),v.end());
        int l=v[v.size()-1];

        return l;
        






    }
};
