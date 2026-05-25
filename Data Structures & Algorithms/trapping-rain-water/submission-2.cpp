class Solution {
public:
    int trap(vector<int>& height) {
        
    int n =height.size();

    int pre[n],suf[n];
    int premax=0; int sufmax=0;

    for(int i =0;i<n;i++){

        premax=max(height[i],premax);
        pre[i]=premax;

    }

    for (int i=n-1;i>=0;i--){

        sufmax=max(sufmax,height[i]);
        suf[i]=sufmax;


    }

 int s=0;
    for(int i =1;i<n-1;i++){
        int need=min(pre[i-1],suf[i+1])-height[i];

        if(need>0){
            s+=need;
        }

     
     


    }

    return s;

     
    
        
        
    }
};
