class Solution {
public:
    bool isValid(string s) {
        // if(s=="()"|| s=="{}" || s=="[]"){
        //     return 1;
        // }
        // else if(s=="{([])}"|| s=="()[]{}"){
        //     return 1;
        // }
        // else{
        //     return 0;
        // }'
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        stack<int> st;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                st.push(s[i]);
            }
            else{
                if(!st.empty()){
                    
                
                char c=st.top();
                if((s[i]==')' && c=='(')||(s[i]=='}' && c=='{')||(s[i]==']' && c=='[')){
                     st.pop();
                }
                else{
                    return false;
                }
              }
              else{
                  return false;
              }  
            }
        }
        if(st.empty()){
            return true;
        }
        else{
            return false;
        }
    
