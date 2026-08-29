class Solution {
public:
    int jump(vector<int>& nums) {
        if(nums.size() <= 1){return 0;}
        int jumpRange = nums[0];
        int jumps = 0;
        int currEnd = 0;
        for(int i=0; i< nums.size(); i++){
            jumpRange = max(jumpRange, i + nums[i]);
            if(i == currEnd){
                jumps++; 
                currEnd = jumpRange;
            if(currEnd >= nums.size()-1){
                break;
            }
            }
        }
        return jumps;
    }
};