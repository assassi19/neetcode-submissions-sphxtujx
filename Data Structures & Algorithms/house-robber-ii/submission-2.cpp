class Solution {
public:
int maxi_robbi(vector<int> nums){
int n = nums.size();
        int prev = nums[0];
        int prev2 = 0;
        for(int i=1; i<n; i++){
            int take = nums[i];
            if(i > 1){ take += prev2;}
            int notTake = prev;
            int curri = max(take, notTake);
            prev2 = prev;
            prev = curri;
        }
        return max(prev, prev2);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        switch(n){
            case 0: return 0;
            case 1: return nums[0];
            case 2: return max(nums[0], nums[1]);
        }
    vector<int> tmp1, tmp2;
        for(int i=0; i<n-1; i++){
            tmp1.push_back(nums[i]);
        }
        for(int i=1; i<nums.size(); i++){
            tmp2.push_back(nums[i]);
        }
        return max(maxi_robbi(tmp1), maxi_robbi(tmp2));
    }
};
