class Solution():
    def lengthOfLongestSubstring(self, s):
        sub, max_num = "", 0
        for i in s:
            if i not in sub:
                sub += i
            else:
                max_num = max(max_num, len(sub))
                sub = sub[sub.index(i)+1:]+i
        return max(max_num, len(sub))