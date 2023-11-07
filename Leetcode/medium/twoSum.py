class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        one,two,steps = 0,1,2
        while(nums[one] + nums[two] != target):
            if two == len(nums):
                one,two,steps= 0,steps,steps+1
            else:
                one,two = one+1,two+1
        return one,two