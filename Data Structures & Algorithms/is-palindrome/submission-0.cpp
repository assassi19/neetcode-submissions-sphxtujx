class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> singleLine;
        for(char c : s){
            if(isalnum(c)){
                singleLine.push_back(tolower(c));
            }
        }
        int n = singleLine.size();
        for(int i=0, j=n-1; i<j; i++, j--){
            if(singleLine[i] != singleLine[j]) return false;
        }
        return true;
    }
};