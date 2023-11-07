class Solution:
    def findMedianSortedArrays(self, nums1: list[int], nums2: list[int]) -> float:
        lst = []
        for i in nums1:
            lst.append(i)
        for n in nums2:
            lst.append(n)
        lst.sort()
        print(lst)
        if len(lst) % 2 == 1:
            return float(lst[len(lst)//2])
        else:
            return float((lst[(len(lst)//2)-1] + lst[len(lst)//2])/2)