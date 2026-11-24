class Solution {
    public boolean isPalindrome(String s) {
        int l = 0,  right = s.length()-1;
        while(l < right){
            if(!isAlphaNum(s.charAt(l))){
                l++;
                continue;
            }
            if(!isAlphaNum(s.charAt(right))){
                right--;
                continue;
            }
            if(Character.toLowerCase(s.charAt(l)) != Character.toLowerCase(s.charAt(right))){
                return false;
            }
            l++;
            right--;
        }
        return true;
    }

    public boolean isAlphaNum(char c){
        if((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') ){
            return true;
        }
        return false;
    }
}
