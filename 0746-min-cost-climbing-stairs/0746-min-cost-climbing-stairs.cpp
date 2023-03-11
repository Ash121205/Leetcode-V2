class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        int f = cost[0];
        int s = cost[1];

        if(n <= 2)
        {
            return min(f, s);
        }

        for(int i=2;i<n;i++)
        {
            int c = cost[i] + min(f, s);
            f = s;
            s = c;
        }

        return min(f, s);
    }
};