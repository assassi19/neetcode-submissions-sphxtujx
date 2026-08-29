class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(auto it : nums){
            if(!mp.count(it)){
                mp[it] = 1;
            }
            else {
                return true;
            }
        }
        return false;
    }
};