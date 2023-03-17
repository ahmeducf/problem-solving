/**
 * @param {number[]} digits
 * @return {number[]}
 */
const plusOne = function plusOne(digits) {
  let firstNotNineIndex = -1;
  const result = digits;

  for (let i = result.length - 1; i >= 0; i--) {
    if (result[i] !== 9) {
      firstNotNineIndex = i;
      break;
    }
  }

  if (firstNotNineIndex === -1) {
    return [1].concat(Array(result.length).fill(0));
  }

  result[firstNotNineIndex] += 1;
  for (let i = firstNotNineIndex + 1; i < result.length; i++) {
    result[i] = 0;
  }

  return result;
};
