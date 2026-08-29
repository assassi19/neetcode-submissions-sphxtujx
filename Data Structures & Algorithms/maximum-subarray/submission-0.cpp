class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currTotal = 0;
        int maxi = nums[0];
        for(int i=0; i<nums.size(); i++){
            if(currTotal <0){
                currTotal = 0;
            }
            currTotal +=nums[i];
            maxi = max(maxi, currTotal);
        }
        return maxi;
    }
};
