class Solution {
public:
    void f(vector<int> &nums,vector<vector<int>> &ans,vector<int> &dp,int i ){
        if(i==nums.size()){
            ans.push_back(dp);
            return;
        }
        dp.push_back(nums[i]);
        f(nums,ans,dp,i+1);
        dp.pop_back();
        f(nums,ans,dp,i+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> dp;
        f(nums,ans,dp,0);
        return ans;
    }
};