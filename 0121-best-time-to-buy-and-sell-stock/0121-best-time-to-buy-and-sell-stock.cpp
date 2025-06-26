class Solution {
public:
    int maxProfit(vector<int>& prices) {
          int n=prices.size();
          int profit=0;
          int cost=prices[0];
          for(int i=1;i<n;i++){
            int value = prices[i] - cost;
            profit =max(profit,value);
            cost = min(cost,prices[i]);
          }
        return profit;
    }
};