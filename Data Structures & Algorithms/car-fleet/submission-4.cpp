class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        //vector<int>time;
        int n =position.size(); double t;
        vector<pair<int,double>>ch;
        for(int i=0;i<n;i++){
            t=(double)(target-position[i])/speed[i];
          ch.push_back({position[i],t});
        }

        sort(ch.rbegin(),ch.rend());

        double mx=0;

        int fleet=0;

        for(auto it:ch){


            if(it.second>mx){
                fleet++;
                mx=it.second;

            }





        }

        return fleet;
        

        
    }
};
