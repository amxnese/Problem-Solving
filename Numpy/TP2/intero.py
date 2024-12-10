import numpy as np
a = [[1,2],[3,4]]
def min_ele(mat, ele, row, col):
  for i in range(2):
    for j in range(2):
      if a[i][j] == ele:
        print(f"the element {ele} was found at [{i}][{j}]")
        return
  print("element was not found")
min_ele(a, 4, 2, 2)


def moyenne(mat):
  return np.mean(ventes,axis=0)
ventes = np.array( [[1,2,3],
                    [4,5,6],
                    [7,8,9]])
print(moyenne(ventes))



def produit(mat1, mat2):
  return np.dot(mat1, mat2)
a =  [[1,2],
      [3,4]]
b =  [[2,1],
      [4,3]]
print(produit(a,b))