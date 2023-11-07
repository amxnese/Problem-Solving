class Solution:
    def addTwoNumbers(self, l1, l2):
        rv_lst1 = int("".join(map(str, reversed(l1))))
        rv_lst2 = int("".join(map(str, reversed(l2))))
        return int(str(rv_lst1 + rv_lst2)[::-1])
print(Solution().addTwoNumbers([2,4,3],[5,6,4]))