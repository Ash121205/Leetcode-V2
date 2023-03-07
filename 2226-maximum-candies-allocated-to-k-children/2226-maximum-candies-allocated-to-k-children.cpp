class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        int low = 0;
        int high = 1e7;

        while(low < high) {
            long long sum = 0;
            long long mid = (low + high + 1)/2;

            for(auto &it:candies) {
                sum += it/mid;
            }

            if(sum < k)
            {
                high = mid - 1;
            }
            else low = mid;
        }

        return low;
    }
};