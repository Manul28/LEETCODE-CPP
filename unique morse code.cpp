class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        vector<string> lst={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        map<string,int> m;
        for(char word:words){
          string s;
          for(char ch:word){
            s+=lst[ch-'a'];
          }
          m[s]++;
        }
      return m.size();
    }
};
