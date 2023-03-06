class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int start = 0, n = arr.size();
        while(n)
        {
            int step = n >> 1;
            int pos = start + step;
            if(arr[pos] - pos < k + 1)
            {
                n -= step + 1;
                start += step + 1;
            }
            else
            {
                n = step;
            }
        }

        return k + start;
    }
};