class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int l = 0;
        int r = n-1, maxi = INT_MIN;
        while(l < r){
            int area = (r-l)*min(heights[r],heights[l]);
            if(heights[l] < heights[r]){
                l++;
            }
            else{r--;}
            maxi = max(maxi, area);
        }
    return maxi;
    }
};

