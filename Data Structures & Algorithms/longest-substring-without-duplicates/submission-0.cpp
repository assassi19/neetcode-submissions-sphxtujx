class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0, r = 0;
        int ans=0;
        if(s.size() <= 1){return s.size();}
        unordered_map<char, int> mp;
        while(r < s.size()){
            if(!mp.count(s[r])){
                mp[s[r]]++;
                r++;
            }
        else{
            mp.erase(s[l]);
            l++;
        }
        ans = max(ans, r-l);
        }
        return ans;
    }
};
