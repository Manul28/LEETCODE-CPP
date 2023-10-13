class Solution{
public:
 int mincost(vector<int> cost){
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    int n=cost.size();
    for(int i=2;i<n;i++){
       cost[i]+=min(cost[i-1],cost[i-2]);
    }
    return min(cost[n-1],cost[n-2]);
 }
};
