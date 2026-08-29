class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, int> mp;
        int res = 0;

        for(int it : nums){
            if(!mp[it]){
                mp[it] = mp[it-1] + mp[it+1] + 1;
                // for the left side...
                mp[it-mp[it-1]] = mp[it];
                mp[it+mp[it+1]] = mp[it];
                res = max(res, mp[it]);
            }
        }
        return res;
    }
};