class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        multiset<int> st;
        for (auto num : nums) {
            st.insert(num*num);
        }
        vector<int> ans(st.begin(), st.end());
        return ans;
    }
};