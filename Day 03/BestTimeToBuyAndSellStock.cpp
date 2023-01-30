

                                                            // Best Time to Buy and Sell Stock  //

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minSofar=INT_MAX,maxProfit=INT_MIN;
       int n=prices.size();
        for(int i=0; i<n; i++)
        {
           minSofar=min(minSofar,prices[i]);
           maxProfit=max(maxProfit,prices[i]-minSofar);
        }
        
       return maxProfit;
        
    }
};
