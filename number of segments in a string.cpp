class Solution {
public:
    int countSegments(string s) {
        int n=s.length();
        int ans=0;
        bool flag=0;
        for(int i=0;i<n;i++){
            if(s[i]!=' '&& flag==1 && i!=n-1) continue;// we are at the segment and are not in last index of the string

            if(s[i]==' ' && flag==0) continue;// encountering consecutive spaces

            if(s[i]!=' ' && flag==0){//we are at a start of a segment
                // continue;
                flag=1;//indicating we are in a segment
                // ans++;
            }
            else if(s[i]==' ' && flag==1){//meaning we are at the end of a segment
                flag=0;//indicating we are not in a segment anymore
                ans++;
            }
            if(i==n-1 && flag==1) ans++;
        }
        return ans;
    }
};
