class Solution{
public:
    int sumdigits(int num,int k){
      if(num==0) return 0;
      for(int i=1;i<=10;i++){
        if(i*k<=sum && (i*k)%10==(num)%10){
           return i;// return the value if true
        }
      }
      return -1;//return -1 when value is false
    }
};
