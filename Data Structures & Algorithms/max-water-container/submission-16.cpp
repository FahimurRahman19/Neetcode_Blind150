class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l=0;int r=heights.size()-1;
        int ar=0;
        while(l<r){
             ar=max(min(heights[l],heights[r])*(r-l),ar);

             if(heights[l]<heights[r])l++;

             else r--;



        }

        return ar;
        
    }
};
