 vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>>ans;
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size();++i){        
        if(i>0 and nums[i]==nums[i-1]){
            continue;
        }
        int l=i+1;
        int r=nums.size()-1;
        while(l<r){
            int sum=nums[i]+nums[l]+nums[r];
                if(sum>0){
                    r--;
                }
                else if(sum<0){
                    l++;
                }
                else if(sum==0){
                 
        vector<int>tmp;           
            ans.push_back({nums[i],nums[l],nums[r]});
                while(l<r and nums[l]==nums[l+1]){
                        ++l;
                    }
                while(l<r and nums[r]==nums[r-1]){
                        r--;
                    }
                    ++l;
                }
            }
        }
        
        return ans;
 }
