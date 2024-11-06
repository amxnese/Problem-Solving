import numpy as np
A = np.random.rand(3, 4) 
B = np.random.rand(4)
# Calcul du produit scalaire entre chaque ligne de A et le vecteur b
result = np.sum(A * B[np.newaxis, :], axis=1)
print(A)
