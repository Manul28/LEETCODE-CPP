class Solution{
public:
  bool detectcapital(string word){
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    for(int i=1;i<word.size();i++){
      if(isupper(word[1])!=isupper(word[i]) || islower(word[0]) && isupper(word[i])){
        return false;
      }
    }
    return true;
  }
};
