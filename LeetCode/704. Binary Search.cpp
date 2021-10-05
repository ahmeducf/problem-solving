class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lo = 0, hi = nums.size()-1;
        int mid;
        while(lo <= hi){
            mid = (hi+lo)/2;

            if (nums[mid] == target){
                return mid;
            }
            else if (nums[mid] > target){
                hi = mid-1;
            }
            else {
                lo = mid + 1;
            }
        }
        return -1;
    }
};