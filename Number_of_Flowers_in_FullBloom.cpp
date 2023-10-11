class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) {
        ios_base::sync_with_stdio(false);
        cout.tie(NULL);
        cin.tie(NULL);
        int n= people.size();
        int m = flowers.size();
        vector<int> ans(n,0);
        vector<int> start(m); // to store start time .
        vector<int> finish(m); // to store end time
        for(int i=0;i<m;i++){
           start[i] = flowers[i][0];
           finish[i] = flowers[i][1];
        }
        sort(start.begin(),start.end()); // start time in ascending order
        sort(finish.begin(),finish.end()); // end time in ascending order
     
        for(int i=0;i<n;i++){
            int target = people[i];
            int s = upper_bound(start.begin(),start.end(),target)-start.begin();
            int e = lower_bound(finish.begin(),finish.end(),target)-finish.begin();
            
            ans[i] = s-e;;
        }
        return ans;
        
    }
};
