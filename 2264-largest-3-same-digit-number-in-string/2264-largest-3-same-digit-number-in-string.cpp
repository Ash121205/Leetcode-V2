class Solution {
public:
    string largestGoodInteger(string num) {
        // string ans = "";
        map<char, int> mpp;

        string temp = "";

        for(int i=0;i<3;i++)
        {
            temp += num[i];
            mpp[num[i]]++;
        }

        int ans = INT_MIN;
        int cur = stoi(temp);

        if(mpp.size() == 1)
        {
            ans = max(ans, cur);
        }

        for(int i=3;i<num.size();i++)
        {
            temp.erase(0,1);
            temp += num[i];
            cur = stoi(temp);
            mpp[num[i-3]]--;
            if(mpp[num[i-3]] == 0)
            {
                mpp.erase(num[i-3]);
            }
            mpp[num[i]]++;
            if(mpp.size() == 1)
            {
                ans = max(ans, cur);
            }
        }

        if(ans == 0)
        {
            return "000";
        }

        if(ans == INT_MIN)
        {
            return "";
        }
        
        return to_string(ans);
    }
};