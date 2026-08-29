class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<int> total;
        for(auto it : nums1){
            total.push_back(it);
        }
        for(auto it : nums2){
            total.push_back(it);
        }
        sort(total.begin(), total.end());
        if(total.size() % 2 == 0){
            return (total[total.size()/2 - 1] + total[total.size()/ 2]) / 2.0;
        }
        return total[total.size()/ 2];
    }
};
