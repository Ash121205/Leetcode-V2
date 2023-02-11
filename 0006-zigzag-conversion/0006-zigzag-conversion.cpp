class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows > s.size() || numRows == 1)
        {
            return s;
        }

        vector<string> words(numRows);
        int i=0, d=-1, j=0;

        while(i<s.size())
        {
            words[j] += s[i];
            d = (j == 0 || j == (numRows - 1)) ? -d : d;
            j += d;
            i++;
        }

        string ans = "";

        for(auto &it:words)
        {
            ans += it;
        }

        return ans;
    }
};