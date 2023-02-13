class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int ans = 0, odd = 0, even = 1, sum = 0, mod = 1e9+7;

        for(int i=0;i<arr.size();i++)
        {
            sum += arr[i];
            if(sum & 1)
            {
                odd++;
                ans = ((ans % mod) + (even % mod));
            }
            else
            {
                even++;
                ans = ((ans % mod) + (odd % mod));
            }
        }

        return ans;
    }
};