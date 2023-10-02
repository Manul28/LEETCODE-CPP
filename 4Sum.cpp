class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        sort(nums.begin(),nums.end());
        set<vector<int>> st;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                // now using two pointer concept here
                int k=j+1;//left
                int l=nums.size()-1;//right
                while(k<l){
                    long long int sum= nums[i];
                    sum+=nums[j];// to avoid runtime error
                    sum+=nums[k];
                    sum+=nums[l];
                    if(sum==target){
                        st.insert({nums[i],nums[j],nums[k],nums[l]});
                        k++;
                        l--;
                    }
                    else if(sum<target){
                        k++;
                    }
                    else{
                        l--;
                    }
                }
            }
        }
        // sort(st.begin(),st.end());
        // return vector<vector<int>>(st.begin(),st.end());
       // we are use the above line for returning the answer
       vector<vector<int>> ans;
        for(auto i:st)
           ans.push_back(i);
        sort(ans.begin(),ans.end());
        return ans;
    }
};
