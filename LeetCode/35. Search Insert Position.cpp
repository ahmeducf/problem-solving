class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        auto it = lower_bound(nums.begin(), nums.end(), target);

        return it - nums.begin();
    }
};

/// Another Solution
/*
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int lo = 0, hi = nums.size();
        int mid;
        while (lo < hi){
            mid = lo + (hi - lo)/2;

            if (nums[mid] >= target){
                hi = mid;
            }
            else {
                lo = mid + 1;
            }
        }
        return lo;
    }
};*/
