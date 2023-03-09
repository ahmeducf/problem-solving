/**
 * @param {number} x
 * @return {number}
 */
var reverse = function(x) {
  let absReserved = Math.abs(x).toString().split("").reverse().join("");
  if (absReserved > 2 **31 - 1)
    return 0
  
  return absReserved * Math.sign(x);
};