#pragma GCC optimise("03")
class Solution{
public:
    void dfs(unordered_map<int,vector<int>>& m,unordered_set<int>& v,int a,vector<int>& ans){
      // for(auto 
      if(v.find(a)!=v.end()) 
          return;
      ans.push_back(a);
      v.insert(a);  
      for(auto x:m[a]) dfs(m,v,x,ans);
    }
    int restoreArrays(vector<vector<int>>& A){
      unordered_map<int,vector<int>> m;
      for(auto a:A){
        m[a[0]].push_back(m[a[1]]);
        m[a[1]].push_back(m[a[0]]);
      }
      int head;
      for(auto a:m){
        if(a.second.size()==1) head=a.first;
      }
      vector<int> ans;
      unordered_set<int> v;
      dfs(m,v,head,ans);
      return ans;
    }
};
