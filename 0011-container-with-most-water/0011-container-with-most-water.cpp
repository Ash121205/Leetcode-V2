class Solution {
public:
    int maxArea(vector<int>& height) {
        int P1 = 0;
        int P2 = height.size() - 1;
        int ans = 0;
        while(P1 < P2){
            int w = P2 - P1;
            int h = min(height[P1], height[P2]);
            int area = h * w;
            ans = max(ans, area);
            if(height[P1] < height[P2]) 
                P1++;
            else if(height[P1] > height[P2]) 
                P2--;
            else {
                P1++;
                P2--;
            }
        }
        return ans;
    }
};