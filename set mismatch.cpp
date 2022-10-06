class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        
        unordered_set<int> s(nums.begin(),nums.end());
        unordered_map<int,int> m;
        vector<int> res;
        
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
            
            if(m[nums[i]]>1){
                res.push_back(nums[i]);
                //cout<<nums[i];
                //break;
            }
        }
        
//         for(int i=1;i<=s.size()+1;i++){
//             if(s.find(i)==s.end())
//                 res.push_back(i);
//         }
        
        for(int i=1;i<=nums.size();i++)
        {
            if(m[i]==0)
                res.push_back(i);
        }
        
        return res;
        
    }
};