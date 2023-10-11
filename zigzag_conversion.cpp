class Solution{
public:
     string zigzag_conversion(vector<string> s,int numRows){
        if(s.length()<3 || numRows==1){
          return s;
        }
        vector<string> ans(numRows);
        bool flag=false;
        int i=0;
        for(auto ch:s){
          ans[i]+=ch;
          if(i==0 || i==numRows-1){
             flag=!flag;// to flip the flag for first row and last row
          }
          if(flag){
            i++;
          }
          else{
            i--;
          }
        }
       string zigzag="";
       for(auto str:ans){
         zigzag+=str;
       }
       return zigzag;
     }
};
