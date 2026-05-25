class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int long long r=*max_element(piles.begin(),piles.end());
        int long long  l=1;

        int long long  res;
       
        while(l<=r){

            int long long m=l+(r-l)/2;

          int long long time=0;
          for(int i =0;i<piles.size();i++){

            time+=ceil((double)piles[i]/m);
          }
          if(time<=h){res=m;  r=m-1;}
          else l=m+1;
        






        }


          return res;

        }

    
};
