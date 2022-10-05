class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        vector<int> res;
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1)
                cnt++;
            
            if(nums[i]==0 || i==nums.size()-1){
                res.push_back(cnt);
                cnt=0;
            }
        }
        int max = *max_element(res.begin(), res.end());
        return max;
    }
};