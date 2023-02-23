class Solution {
public:
    string addStrings(string num1, string num2) {
        int index1 = num1.size() - 1, index2 = num2.size() - 1, carry = 0;
        string ans = "";
        while(index1>=0 || index2>=0 || carry>0){
            if(index1>=0){
                carry += num1[index1] - '0';
                index1--;
            }
            if(index2>=0){
                carry += num2[index2] - '0';
                index2--;
            }
            if(carry>=0){
                ans.push_back(carry%10 + '0');
                carry /= 10;
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
