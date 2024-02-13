' LeetCode 6 : ZigZag , medium' 
class Solution():
    def convert(self, s, numRows):
        ret = ""
        for i in range(numRows):
            step = numRows*2-2 if numRows != 1 else 1
            for n in range(i, len(s), step):
                ret += s[n]
                if n+step-i*2 < len(s) and i and i != numRows-1:
                    ret += s[n+step-i*2]
        return ret