/**
 * @param {number} x
 * @return {number}
 */
const mySqrt = function mySqrt(x) {
  if (x === 0) {
    return 0;
  }
  if (x < 4) {
    return 1;
  }
  let left = 1;
  let right = Math.floor(x / 2);
  while (left <= right) {
    const mid = Math.floor((left + right) / 2);
    const square = mid * mid;
    if (square === x) {
      return mid;
    }
    if (square < x) {
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }
  return right;
};
