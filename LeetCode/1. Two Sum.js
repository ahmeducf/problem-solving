// Problem Link: https://leetcode.com/problems/two-sum/

/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    let numsMap = {};
    for (let index = 0; index < nums.length; index++) {
      let num = nums[index];
      let complement = target - num;

      if (numsMap[complement] !== undefined) {
        return [numsMap[complement], index];
      } else {
        numsMap[num] = index;
      }
    }

    return [];
};

console.log(twoSum([2,7,11,15], 9));