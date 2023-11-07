from math import sqrt
class Solution:
    @staticmethod
    def is_square(number):
        if  pow(int(sqrt(number)),2) == number:
            return True
    def numSquares(self, n: int) -> int:
        if self.is_square(n):
            return 1
        else:
            ps_lst = [i for i in range(1,n) if self.is_square(i)]
            count, number, real= 0,0,99999
            while(ps_lst):
                for index in ps_lst[::-1]:
                    while(number + index <= n):
                        count += 1
                        number += index
                    if number == n:
                        if count <= real:
                            real = count
                        count,number = 0,0
                        if n%2==0 or len(ps_lst)<=2:
                            ps_lst.pop(-1)
                        else:
                            ps_lst.pop(-2)
                        break
        return real
print(Solution.numSquares(Solution,22))