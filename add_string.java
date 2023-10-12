import java.math.*;
class Solution {
    public String addStrings(String num1, String num2) {
        return String.valueOf((new BigInteger(num1)).add(new BigInteger(num2)));
    }
}
