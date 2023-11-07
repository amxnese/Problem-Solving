class Solution:
    def maxArea(self, height: list[int]) -> int:
        result = 0
        j = 0
        while(j != len(height)):
            for i in range(j,len(height)):
                min1 = min(height[j],height[i]) * (i-j)
                result = min1 if min1>result else result
            j += 1
        return result