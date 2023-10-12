class Solution{
public:
      vector<int> findAnagram(string s,string p){
          ios_base::sync_with_stdio(false);
          cout.tie(NULL);
          cin.tie(NULL);
          unordered_map<char,int> hash,currHash;
          vector<int> ans;
          if(s.size()>=p.size()){
             int l=0,e=p.size()-1;
             for(auto it:p) hash[it]++;
             for(int i=l;i<=e;i++){
                 currHash[s[i]]++;
             }
             while(l<=s.size()-p.size()){
                if(currHash==hash){
                   ans.push_back(l);
                }
                if(currHash[s[l]]==1)
                   currHash.erase(s[l]);
                else 
                   currHash[s[l]]++;
                l++,e++;
                currHash[s[l]]--;
                 
             }
          }
          return ans;    
      }
};
