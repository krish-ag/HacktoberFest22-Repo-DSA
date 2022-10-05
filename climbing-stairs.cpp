class Solution {
public:
    int climbStairs(int n) {
    {
         long long prev=1;
         long long prev2=1;
         for(int i=2;i<=n;i++){
             long long curr=(prev2+prev);
             prev2=prev;
             prev=curr;
         }
         return prev;        
    }}
};
