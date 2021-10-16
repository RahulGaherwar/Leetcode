class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=prices[0],maxpro=0;;
        for(int i=1;i<prices.size();i++)
        {
            mini=min(mini,prices[i]);
            maxpro=max(prices[i]-mini,maxpro);
            
        }
        return maxpro;
    };
    
};