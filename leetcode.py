# class Solution:
#     def twoSum(self, nums: list[int], target: int) -> list[int]:
#         one,two,steps = 0,1,2
#         while(nums[one] + nums[two] != target):
#             if two == len(nums):
#                 one,two,steps= 0,steps,steps+1
#             else:
#                 one,two = one+1,two+1
#         return one,two

# class Solution:
#     def addTwoNumbers(self, l1, l2):
#         rv_lst1 = int("".join([str(i) for i in (list(reversed(l1)))]))
#         rv_lst2 = int("".join([str(n) for n in (list(reversed(l2)))]))
#         return int("".join([t for t in (str(rv_lst1+rv_lst2)[::-1])]))
# print(Solution.addTwoNumbers(Solution,[2,4,3],[5,6,4]))

# class Solution:
#     def nearestExit(self, maze: list[list[str]], entrance: list[int]) -> int:
#         pass


# lst = [["+","+",".","+"],[".",".",".","+"],["+","+","+","."]]
# for i in lst:
#     for n in i:
#         print(n,end=" ")
#     print()

# from math import sqrt
# class Solution:
#     @staticmethod
#     def is_square(number):
#         if  pow(int(sqrt(number)),2) == number:
#             return True
#     def numSquares(self, n: int) -> int:
#         if self.is_square(n):
#             return 1
#         else:
#             ps_lst = [i for i in range(1,n) if self.is_square(i)]
#             count, number, real= 0,0,99999
#             while(ps_lst):
#                 for index in ps_lst[::-1]:
#                     while(number + index <= n):
#                         count += 1
#                         number += index
#                     if number == n:
#                         if count <= real:
#                             real = count
#                         count,number = 0,0
#                         if n%2==0 or len(ps_lst)<=2:
#                             ps_lst.pop(-1)
#                         else:
#                             ps_lst.pop(-2)
#                         break
#         return real
# print(Solution.numSquares(Solution,22))
# from random import randint
# n = randint(0,1000)
# t = n*(n+1)/2
# x = (n*n+n)/2
# print(t,x)
# class Solution:
#     def findMedianSortedArrays(self, nums1: list[int], nums2: list[int]) -> float:
#         lst = []
#         for i in nums1:
#             lst.append(i)
#         for n in nums2:
#             lst.append(n)
#         lst.sort()
#         print(lst)
#         if len(lst) % 2 == 1:
#             return float(lst[len(lst)//2])
#         else:
#             return float((lst[(len(lst)//2)-1] + lst[len(lst)//2])/2)

# Definition for singly-linked list.

# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
# class Solution:
#     def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
#         dummy = ListNode()
#         cur = dummy
#         carry = 0
#         while l1 or l2 or carry:
#             v1 = l1.val if l1 else None
#             v2 = l2.val if l2 else None
#             val = v1 + v2 + carry
#             carry = val // 10
#             val = val % 10
#             cur.next = ListNode(val)
#             l1 = l1.next if l1 else None
#             l2 = l2.next if l2 else None
#         return dummy.next

# class Solution:
#     def maxArea(self, height: list[int]) -> int:
#         result = 0
#         j = 0
#         while(j != len(height)):
#             for i in range(j,len(height)):
#                 min1 = min(height[j],height[i]) * (i-j)
#                 result = min1 if min1>result else result
#             j += 1
#         return result

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def maxDistance(self, grid: list[list[int]]) -> int:
        len = sum([len(x) for x in grid])
        
        for i in grid:
            for n in i:
                if n == 0:
                    pass

