class Solution {
    public:
    string reverseWords(string s) {
        vector<string>words;
        int j=0;
        int i;
        for(i=0;i<s.length();i++) {
            if(s[i] == ' ') {
                int a = i-j;
                string str = s.substr(j,a);
                words.push_back(str);
                j = i+1;
            }
        }
        int a = i-j;                              
        string str = s.substr(j,a);
        words.push_back(str);
        string ans = "";
        for(int i=words.size()-1;i>=0;i--) {
            if(words[i] == "" || words[i] == " ") {
                continue;
            } 
            ans = ans + words[i] + " ";
        }
        ans.pop_back();
        return ans;
    }
    
};