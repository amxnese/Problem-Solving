// Longest palindromic substring
/**
 * @param {string} s
 * @return {string}
 */
var longestPalindrome = function (s) {
  let longest = s[0];
  let j = 1;
  let n = 0;
  for (let i = 0; i < s.length; i++) {
    j = 1;
    while (j <= i && j <= s.length - i - 1 && s[i - j] == s[i + j]) {
      if (j * 2 + 1 > longest.length) {
        longest = s.substring(i - j, i + j + 1);
      }
      j++;
    }
    n = 0;
    while (n <= i && n <= s.length - i - 2 && s[i - n] == s[i + n + 1]) {
      if (s.substring(i - n, i + n + 2).length > longest.length) {
        longest = s.substring(i - n, i + n + 2);
      }
      n++;
    }
    if (longest.length == s.length) {
      break;
    }
  }
  return longest;
};
