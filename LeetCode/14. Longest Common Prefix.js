/**
 * @param {string[]} strs
 * @return {string}
 */
const longestCommonPrefix = function longestCommonPrefix(strs) {
  let maxPrefix = strs.sort()[0];

  for (let i = 0; i < strs.length; i++) {
    for (let j = 0; j < maxPrefix.length; j++) {
      if (maxPrefix.charAt(j) !== strs[i].charAt(j)) {
        maxPrefix = maxPrefix.slice(0, j);
        break;
      }
    }
  }

  return maxPrefix;
};
