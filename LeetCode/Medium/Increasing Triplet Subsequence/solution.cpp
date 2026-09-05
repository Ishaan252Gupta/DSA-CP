class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int x=INT_MAX;
        long long n=nums.size();
        vector<int> a(n);
        for(int i=0;i<nums.size();i++){
            if(x>nums[i]){
                
                x=nums[i];
            }
            a[i]=x;
        }
        x=INT_MIN;
        vector<int> b(n);
        for(int i=nums.size()-1;i>=0;i--){
            if(x<nums[i]){
                
                x=nums[i];
            }
            b[i]=x;
        }
        for(int i=1;i<n-1;i++){
            if(a[i]<nums[i] && nums[i]<b[i]){
                return true;
            }
        }
        return false;
    }
};