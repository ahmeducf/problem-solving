// Problem Link: https://leetcode.com/problems/two-sum/

/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
const twoSum = function twoSum(nums, target) {
  const numsMap = {};
  for (let index = 0; index < nums.length; index++) {
    const num = nums[index];
    const complement = target - num;

    if (numsMap[complement] !== undefined) {
      return [numsMap[complement], index];
    }
    numsMap[num] = index;
  }

  return [];
};

console.log(twoSum([2, 7, 11, 15], 9));
