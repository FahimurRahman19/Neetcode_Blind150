class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        int ans=0;
        for(int i=0;i<tokens.size();i++){

   if(tokens[i]!="+" && tokens[i]!="-" && tokens[i]!="*" && tokens[i]!="/")st.push(stoi(tokens[i]));
   else {
    int a=st.top(); st.pop();
    int b=st.top(); st.pop();

   if(tokens[i]=="+")st.push(b+a);
    if(tokens[i]=="-")st.push(b-a);
     if(tokens[i]=="*") st.push(b*a);
      if(tokens[i]=="/")st.push(b/a);

    




   }


        }

        return st.top();
        
        
    }
};
