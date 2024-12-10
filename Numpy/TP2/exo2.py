import numpy as np
A = np.random.rand(3, 4) 
B = np.random.rand(4)
# result = np.dot(A * B[np.newaxis, :])
moyen = np.mean(A, axis=0 )
print(moyen)
