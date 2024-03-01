class Solution{
  public String maxOdd(String s){
    //here repeat is for string concatenation
    int ones=0,zeroes=0;
    for(char c:s.toCharArrays()){
       if(c=='1') ones++;
       else zeroes++;
    }
    return "1".repeat(ones-1)+"0".repeat(zeroes)+1;
  }
}
