class Solution{
public:
 bool palindrome(string s){
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    int l=0,h=s.length()-1;
    for(int i=0;i<s.length();i++){
       s[i]=tolower(s[i]);
    }
    while(l<=h){
       if(!isalpha(s[l]) && !isdigit(s[l])){
          l++;
       } 
       else if(!isalpha(s[h]) && !isdigit(s[h])){
          h--;
       }
       else if(s[l]==s[h]){
          l++;
          h--;
       }
       else{
         return false;
       }
    }
    return true;
 }
};
