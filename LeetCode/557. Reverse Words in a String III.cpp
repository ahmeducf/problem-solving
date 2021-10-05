class Solution {
public:
    string reverseWords(string s) {
        int i, j, k = -1;
        int sz = s.size();
        string ans;
        for (i = 0; i <= sz; i++){
            if (s[i] == ' '){
                for (j = i-1; j > k; j--){
                    ans += s[j];
                }
                k = i;
                ans += ' ';
            }
            else if (i == sz){
                for (int j = i-1; j > k; j--){
                    ans += s[j];
                }
            }
        }
        return ans;
    }
};