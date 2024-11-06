lst1 = [[1,2,3],
        [4,5,6],
        [5,5,2]]

lst2 = [[4,5,3],
        [5,2,1],
        [2,6,3]]
lst3 = [[0,0,0],[0,0,0],[0,0,0]]

# multiplicating the lst1 and lst2
n = -1
k = 0
for i in lst1:
  n += 1
  k = 0
  for j in lst2:
    lst3[n][k] += i[k]*j[n]
    k += 1
print(lst3)

# grabbing the diagonal of the matrix
diagonal = []
n = 0
for i in lst1:
  diagonal.append(i[n])
  n+=1
# print(diagonal)
# print(sum(diagonal))