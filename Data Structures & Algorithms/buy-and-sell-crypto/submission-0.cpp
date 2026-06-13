class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int n=prices.size();
        int profit=0;
        int cost=INT_MAX;
        for(int i=0;i<n;i++){
            cost=min(cost,prices[i]);
            int pro=prices[i]-cost;
            profit=max(pro,profit);
        }
        return profit;
    }
};
