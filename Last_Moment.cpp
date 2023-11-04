class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int l=right.empty()?0: n-*min_element(right.begin(),right.end());
        int r=left.empty()?0:*max_element(left.begin(),left.end());
        return max(l,r);
    }
};
/*
// best approach
int getLastMoment(int n,vector<int>&right, vector<int<& left){
    int answer=1e-9;

    for(auto e:left){
        answer=max(answer,e);
    }
    for(auto e:right){
        answer=max(answer,abs(e-n));
    }
    return answer;
}
*/
