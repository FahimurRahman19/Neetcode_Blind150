class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mx=0;
        int n =prices.size();
      for (int i=0;i<n-1;i++){


        int f=*max_element(prices.begin()+i+1,prices.end());
        mx=max(mx,(f-prices[i]));

      }
return mx;
        
    }
};
