class Solution {
public:

    long long numberOfTrips(vector<int>&a, long long time)
    {
        long long ans = 0;
        for(auto &it:a)
        {
            long long val = it;
            ans += (time/val);
        }

        return ans;
    }
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long low = 1;
        long long high = 1e14;

        while(low < high)
        {
            long long mid = low + (high - low)/2;

            if(numberOfTrips(time, mid) >= totalTrips)
            {
                high = mid;
            }
            else low = mid + 1;
        }

        return low;
    }
};