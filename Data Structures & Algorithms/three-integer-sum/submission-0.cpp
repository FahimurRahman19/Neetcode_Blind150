class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        set<vector<int>>s;


        for(int i =0;i<nums.size();i++){

            int req=-nums[i];
            int l=i+1; int r=nums.size()-1;
            while(l<r){
                int sum=nums[l]+nums[r];

                if(sum<req)l++;
                if (sum>req)r--;
                if(sum==req){s.insert({nums[i],nums[l],nums[r]}); l++;r--;
                
                }

               
            }


        }

        return vector<vector<int>>(s.begin(),s.end());















        }













        
    
};
