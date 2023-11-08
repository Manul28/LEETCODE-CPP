class Solution{
public:
     bool cellReaction(int sx,int sy,int fx,int fy,int t){
       ios_base::sync_with_stdio(false);
       cin.tie(NULL);
       cout.tie(NULL);
       if(sx==fx && sy==fy) return t!=1;
       return (max(abs(sx-fx),abs(sy-fy))<=t);
     }
};
