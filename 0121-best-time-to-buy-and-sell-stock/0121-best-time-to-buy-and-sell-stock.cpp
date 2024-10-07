class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=0;
        int sell=1;
        int maxProfit=0;
        while(sell < prices.size()){
            if(prices[buy] < prices[sell]){
                int book = prices[sell] - prices[buy];
                maxProfit = max(maxProfit,book); 
            }else{
                buy=sell;
            }
             ++sell;
        }
    return maxProfit;
    }
};