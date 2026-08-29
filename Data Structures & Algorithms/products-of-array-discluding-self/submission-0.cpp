class Solution {
public:
    int prdct_ind(int ind, vector<int> &v, int n, vector<int> arr){
        int ans = v[ind-1];
        for(int i=ind+1; i<n; i++){
            ans *= arr[i];
        }
        return ans;
    }
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>preProduct(nums.size(), 1);
        vector<int> ans;
        preProduct[0] = nums[0];
        int temp = 1;
        for(int i=1; i<nums.size(); i++){
            temp *= nums[i];
        }
        ans.push_back(temp);
        for(int i=1; i<nums.size(); i++){
            ans.push_back(prdct_ind(i,preProduct, nums.size(), nums));
        preProduct[i] = preProduct[i-1]*nums[i];
        }
        return ans;
    }
};
