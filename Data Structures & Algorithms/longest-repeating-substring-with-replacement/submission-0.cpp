class Solution {
public:
    int characterReplacement(string s, int k) {
        //i forgot to take the frequence of highest only...
        int l =0, r=0, maxi = 0, max_freq=0;
        unordered_map<char,int> mp;
        while(r < s.size()){
            mp[s[r]]++;
            max_freq = max(max_freq, mp[s[r]]);
            if(r-l + 1 - max_freq  > k){
                mp[s[l]]--;
                l++;
            }
            maxi = max(maxi, r-l+1);
            r++;
        }
    return maxi;
    }
};
