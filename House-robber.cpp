class Solution {
public:
    
    int solve(vector<int>& nums,int n,vector<int> &t){
        if(n<=0) return 0;
        if(t[n]!=-1) return t[n];
        return t[n] = max(nums[n-1] + solve(nums,n-2,t), solve(nums,n-1,t));
    }
    
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> t(n+1,-1);
        return solve(nums,n,t);
    }
};
