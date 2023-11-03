class Solution{
public:
  vector<string> buildarray(vector<int>& target,int n){
    vector<string> result;
    int currnum=1;
    int index=0;
    while(currnum<=n && index<target.size()){
      int num=target[index];
      if(num==target){
        result.push_back("Push");
        currnum++;
        index++;
      }
      else{
        result.push_back("Push");
        result.push_back("Pop");
        currnum++;
      }
    }
    return result;
  }
};
