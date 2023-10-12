import java.math.*;
class Solution {
    public String addStrings(String num1, String num2) {
        return String.valueOf((new BigInteger(num1)).add(new BigInteger(num2)));
    }
}
/*
Approach-
  -declaring num1 and num2 as BigInteger since they can be easily converted into string 
  -then using add function we add num1 and num2 and store the result into num1
  -then using String.valueOf() function we convert very large integer summation into string
*/
