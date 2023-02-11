class Solution {
public:
    string largestPalindromic(string num) {
        vector<int>fr(10);

        for(auto &it:num)
        {
            fr[it-'0']++;
        }

        string front = "";
        string back = "";

        for(int i=9;i>=0;i--)
        {
            if(i==0 && front.empty())
            {
                continue;
            }
            while(fr[i] > 1)
            {
                front += to_string(i);
                back += to_string(i);
                fr[i]-=2;
            }
        }

        for(int i=9;i>=0;i--)
        {
            if(fr[i])
            {
                front += to_string(i);
                break;
            }
        }

        reverse(back.begin(), back.end());

        return front + back;
    }
};