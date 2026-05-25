class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        stack<int>st;
        vector<int>res(temp.size(),0);
        int indx;

        for (int i =0;i<temp.size();i++){


            while(!st.empty() && temp[st.top()]<temp[i]){
                indx=st.top();
                st.pop();
                res[indx]=i-indx;




            }


            st.push(i);




        }

        return res;
        
    }
};
