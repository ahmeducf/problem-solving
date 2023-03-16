/* eslint-disable no-param-reassign */
/**
 * @param {number[]} nums
 * @return {number}
 */
const removeDuplicates = function removeDuplicates(nums) {
  let slowIndex = 0;

  for (let index = 1; index < nums.length; index++) {
    if (nums[index] > nums[slowIndex]) {
      slowIndex += 1;
      nums[slowIndex] = nums[index];
    }
  }

  return slowIndex + 1;
};
