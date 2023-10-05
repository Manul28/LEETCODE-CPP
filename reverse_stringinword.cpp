class Solution {
public:
    string reverseWords(string s) {
        // while(true){
            
        // }
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        // int index=0;
        stringstream ss(s);
        string temp,ans;
        while(ss>>temp){
            reverse(temp.begin(),temp.end());
            ans+=(temp+' ');
        }
        ans.pop_back();// to remove the trail spaces
        
        return ans;

        // return ans.substr(0,ans.size()-1);// i removed this bcs of optimization
        /*
        string result;
        int i=0;
        int n=s.length();
        while(i<n){
          while(i<n && s[i]==' ') i++;
           if(i>=n) break;
          int j=i+1;
          while(j<n && s[j]!=' ') j++;
            string sub=s.substr(i,j-i);
            if(ans.length()==0) ans=sub;
            else ans=sub+" "+ans;
            i=j+1;
           }
            return ans;
        */
        
    }
};
