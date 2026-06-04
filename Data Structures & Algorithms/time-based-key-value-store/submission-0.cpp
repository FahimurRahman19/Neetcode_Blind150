class TimeMap {
public:
unordered_map<string,vector<pair<int,string>>>contain;

    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {

     contain[key].push_back({timestamp,value}) ;  
        
    }
    
    string get(string key, int timestamp) {

 if(contain.find(key)==contain.end())return "";

        vector<pair<int,string>>&p=contain[key];
        int l=0; int r=p.size()-1;
        string ans;

        while(l<=r){
            
            int mid=l+(r-l)/2;
            if(p[mid].first<=timestamp){
                ans=p[mid].second;
                l=mid+1;

            }
            else r=mid-1;








        }

        return ans;

        
    }
};
