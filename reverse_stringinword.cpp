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
    }
};
