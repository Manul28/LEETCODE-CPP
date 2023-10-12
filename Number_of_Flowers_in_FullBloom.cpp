class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) {
        ios_base::sync_with_stdio(false);
        cout.tie(NULL);
        cin.tie(NULL);
        int m=flowers.size();
        int n=people.size();
        vector<int> start(m);
        vector<int> finish(m);
        vector<int> ans(n,0);
        for(int i=0;i<m;i++){
            int start=flowers[i][0];
            int finish=flowers[i][1];
        }
        sort(start.begin(),start.end());
        sort(finish.begin(),finish.end());

        for(int i=0;i<n;i++){
            int target=people[i];
            int s=upper_bound(start.begin(),start.end(),target)-start.begin();
            int e=lower_bound(finish.begin(),finish.end(),target)-finish.begin();
            ans[i]=s-e;
        }
        return ans;
        
    }
};
