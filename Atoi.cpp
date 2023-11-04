class Solution{
public:
   int Atoi(string s){
       ios_base::sync_with_stdio(false);
       cout.tie(NULL);
       cin.tie(NULL);
       
       int len=s.size();
       double num=0;
       int i=0;
       while(s[i]==' '){
           i++;
       }
       bool positive=s[i]=='+';
       bool negative=s[i]=='-';

       positive==true? i++ : i;
       negative==true? i++ : i;

       while(i<len && s[i]>='0' && s[i]<='9'){
           num=num*10+(s[i]-'0');
           i++;
       }
       negative=num? -num:num;

       num=(num>INT_MAX)? INT_MAX:num;
       num=(num<INT_MIN)? INT_MIN:num;
       
       return int(num);
   }
};
