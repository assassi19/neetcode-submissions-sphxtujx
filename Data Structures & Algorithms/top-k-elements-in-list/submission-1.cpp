class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        if(nums.size() < k){ return {-1};}
        unordered_map<int, int> mp;
        for(auto it: nums){
            mp[it]++;
        }
        vector<pair<int,int>> v1;
        for(auto it : mp){
            v1.push_back(make_pair(it.second,it.first));
        }
        sort(v1.rbegin(), v1.rend());
        vector<int> ans;
        for(int i=0; i<k; i++){
            ans.push_back(v1[i].second);
        }
        return ans;
    }
};
