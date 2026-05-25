class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        vector<vector<int>>s;




        for(int i =0;i<nums.size();i++){

            if(i>0 and nums[i]==nums[i-1])continue;

            int req=-nums[i];
            int l=i+1; int r=nums.size()-1;
            while(l<r){
                int sum=nums[l]+nums[r];

                if(sum<req)l++;
                if (sum>req)r--;
                if(sum==req){s.push_back({nums[i],nums[l],nums[r]});

                while(l<r and nums[l]==nums[l+1])l++;
                while(l<r and nums[r]==nums[r-1])r--;
                
                 l++;r--;
                
                }

               
            }


        }

        return vector<vector<int>>(s.begin(),s.end());















        }













        
    
};
