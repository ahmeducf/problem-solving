/*
 * Directed by: Ahmed Salah
 * Problem link: https://leetcode.com/problems/move-zeroes/
 * */

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int sz = nums.size();

        for (int cur = 0, lastNonZeroPos = 0; cur < sz; cur++) {
            if (nums[cur] != 0){
                swap(nums[cur], nums[lastNonZeroPos]);
                lastNonZeroPos++;
            }
        }
    }
};