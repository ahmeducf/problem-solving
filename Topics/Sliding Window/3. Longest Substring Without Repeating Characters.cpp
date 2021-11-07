class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int> mp;
        int ans = 0;
        int i = 0, j = 0;
        int sz = s.length();
        while (j < sz){
            char c = s[j];
            mp[c]++;
            while (mp[c] > 1){
                mp[s[i]]--;
                i++;
            }
            ans = max(ans, j-i+1);
            j++;
        }
        return ans;
    }
};