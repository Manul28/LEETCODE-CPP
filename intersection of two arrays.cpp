class Solution{
public:
    vector<int> intersectionarray(vector<int>& nums1,vector<int>& nums2){
      ios_base::sync_with_stdio(false);
      cout.tie(NULL);
      cin.tie(NULL);
      set<int> st;//to store the ans
      vector<int> result;// return the value
      for(auto ele:nums1){
        for(auto it:nums2){
           if(ele==it){// if both the arrays contains the same the element then add it in the set;
             st.insert(ele);
           }
        }
      }
      for(auto itr:st){// storing the answer in the vector that has to be returned;
        result.push_back(itr);
      }
      return result;
    } 
};
