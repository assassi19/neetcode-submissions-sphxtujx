class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>& A = nums1;
        vector<int>& B = nums2;
        int total = nums1.size() + nums2.size();
        int half = (total+1) / 2;

        if(B.size() < A.size()){
            swap(A, B);
        }
        int l = 0;
        int r = A.size();
        while(l <=r){
            int mid1 = (l + r)/2;
            int mid2 = half - mid1;
            int l_A = mid1 > 0 ? A[mid1 - 1] : INT_MIN;
            int r_A = mid1 < A.size() ? A[mid1] : INT_MAX;
            int l_B = mid2 > 0 ? B[mid2 - 1] : INT_MIN;
            int r_B = mid2 < B.size() ? B[mid2] : INT_MAX;

            if(l_A <= r_B && l_B <= r_A){
                if(total % 2 != 0){
                    return max(l_A, l_B);
                }
                return (max(l_A, l_B) + min(r_A, r_B)) / 2.0;
            }
            else if(l_A > r_B){
                r = mid1 - 1;
            }
            else{
                l = mid1 + 1;
            }
        }
        return -1;
    }
};
