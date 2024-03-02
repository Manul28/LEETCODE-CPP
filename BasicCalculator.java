class Solution{
  public int Calculator(String s){
    if(s==null || s.length()==0){
      return 0;
    }
    Stack<Integer> stack=new Stack<>();
    int result=0;
    int nums=0;
    int sign=1;
    for(int i=0;i<nums.length;i++){
        char c=s.charAt(i);
        if(Character.isDigit(s){
           nums=nums*10+(c-'0');
        }
        else if(c=='+'){
          result+=nums*sign;
          nums=0;
          sign=1;
        }
        else if(c=='-'){
          result+=nums*sign;
          nums=0;
          sign=-1;
        }
        else if(c=='('){
          stack.push(result);
          stack.push(sign);
          result=0;
          sign=1;
        }
        else if(c==')'){
          result+=sign*nums;
          nums=0;
          result*=stack.pop();
          result+=stack.pop();
        }
      
    }
    result+=sign*nums;
    return result;
  }
}
