// https://leetcode.com/problems/two-sum/description/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int> mp;

        for (int i = 0 ; i < n ; i++) {
            int c  = target - nums[i];
            if(mp.find(c) !=mp.end()){
                return {mp[c], i};
            }
            mp.insert({nums[i], i});
        }
        return {};
    }
};