class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        // let first element be elem & 2nd be index
        for(int i=0; i<nums.size(); i++){
            if(!mp.count(nums[i])){
                mp[target - nums[i]] = i;
            }
            else{
                return {mp[nums[i]], i};
            }
        }
        return {-1, -1};
    }
};
