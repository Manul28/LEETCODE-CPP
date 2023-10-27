class Solution {
    public String longestPalindrome(String str) {
        if(str.length()<2){
            return str;
        }
        String LPS="";
        for(int i=1;i<str.length();i++){
            // for odd length string
            int low=i;
            int high=i;
            while(str.charAt(low)==str.charAt(high)){
                low--;
                high++;
            
            //terminating condition at the end of the string
            if(low==-1 || high==str.length())
                break;
            
            }
            String palindrome=str.substring(low+1,high);
            if(palindrome.length()>LPS.length()){
                LPS=palindrome;
            }

            //even length
            low=i-1;
            high=i;
            while(str.charAt(low)==str.charAt(high)){
                low--;
                high++;
            
            if(low==-1 || high==str.length())
                break;
            }
            palindrome=str.substring(low+1,high);
            if(palindrome.length()>LPS.length()){
                LPS=palindrome;
            }
        }
        return LPS;
    }
}
