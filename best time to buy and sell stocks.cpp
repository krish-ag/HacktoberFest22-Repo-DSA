class Solution {
public:
    int maxProfit(vector<int>& prices) {
       // vector<int> profit;
       //  for(int i=0;i<prices.size();i++){
       //      for(int j = i;j<prices.size();j++){
       //          int p = prices[j]-prices[i];
       //          if(p<0)
       //              profit.push_back(0);
       //          else
       //              profit.push_back(p);
       //          //cout<<p<<endl;
       //      }
       //  }
       //       int m = *max_element(profit.begin(), profit.end()); --> TLE 
         
        int buy=INT_MAX,ans=-1;
        for(int i=0;i<prices.size();i++){
            buy=min(buy,prices[i]); // 
            ans=max(ans,prices[i]-buy);
        }
      return ans;  
    }
};