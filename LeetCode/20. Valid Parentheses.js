/**
 * @param {string} s
 * @return {boolean}
 */
const isValid = function isValid(s) {
  const openStack = [];
  for (let i = 0; i < s.length; i++) {
    const c = s.charAt(i);

    switch (c) {
      case '[':
        openStack.push(']');
        break;
      case '{':
        openStack.push('}');
        break;
      case '(':
        openStack.push(')');
        break;
      default:
        if (c !== openStack.pop()) {
          return false
        }
        break;
    }
  }

  return openStack.length === 0;
};
