class Solution {
public:
    string addStrings(string num1, string num2) 
    {
        char value;
        int sum = 0;
        int carry = 0;
        string ans = "";
        int i = num1.size()-1;
        int j = num2.size()-1;

        while(i>=0 or j>=0)
        {
            sum = carry;
            if(i>=0) sum = sum + num1[i] - 48;
            if(j>=0) sum = sum + num2[j] - 48;
            value = (sum%10) + 48;
            ans = ans + value;
            carry = sum / 10;
            i--;
            j--;
        }    
        value = carry + 48;
        if(carry) ans = ans + value;

        reverse(ans.begin(), ans.end());
        return ans;
    }
};