class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int mini=prices[0],profit=0;
        for(int i=1;i<n;i++)
        {
            mini = min(mini,prices[i]);
            int diff=prices[i]-mini;
            profit=max(profit,diff);
        }
        return profit;
    }
};