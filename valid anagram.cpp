class Solution {
public:
    bool isAnagram(string s, string t) {
        // int n1=s.length();//given string
        // int n2=t.length();// rearranged string
        ios_base::sync_with_stdio(false);
        cout.tie(NULL);
        cin.tie(NULL);
        if(s.length()!=t.length()) 
          return false;
        sort(s.begin(),s.end());// sorting the given string
        sort(t.begin(),t.end()); //sorting the rearranged string

        for(int i=0;i<s.length();i++){
            if(s[i]!=t[i])
               return false;
        }
        return true;

    }
};
