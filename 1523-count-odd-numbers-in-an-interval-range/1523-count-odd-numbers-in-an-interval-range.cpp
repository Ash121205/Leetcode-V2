class Solution {
public:
    int countOdds(int low, int high) {
        int ans = 0;
        if(low % 2 == 1)
        {
            for(int i=low;i<=high;i+=2)
            {
                if(i%2==1)
                {
                    ans++;
                }
            }
        }
        else
        {
            for(int i=low+1;i<=high;i+=2)
            {
                if(i%2==1)
                {
                    ans++;
                }
            }
        }

        return ans;
    }
};