class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lv = INT_MAX, p = 0, pist = 0;
        
        for(int i=0;i<prices.size();i++)
        {
            lv = min(lv, prices[i]);
            pist = prices[i] - lv;
            p = max(pist, p);
        }
        return p;
    }
};