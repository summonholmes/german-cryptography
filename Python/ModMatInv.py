from numpy import identity, linalg, zeros, append as np_append
from ExtendedEuclidean import ExtendedEuclidean

def ModMatInv(key, alpha_len):
    key_identity_matrix = np_append(key, identity(len(key)), axis=1)
    key_determinant = round(linalg.det(key)) % alpha_len
    ext_eucl_determinant = ExtendedEuclidean(alpha_len, key_determinant)

    if ext_eucl_determinant[0] != 1:
        inverted_key = zeros((len(key), len(key)))
        return inverted_key
    else:
        for i in range(len(key)):
            key_identity_iter = key_identity_matrix[i][i]
            ext_eucl_determinant = ExtendedEuclidean(alpha_len, key_identity_iter)
            ii = i
            
            while ext_eucl_determinant[0] != 1 and ii < (len(key) - 1):
                ii += 1
                key_identity_iter = ((key_identity_matrix[ii][i] + key_identity_matrix[i][i]) % alpha_len)
                ext_eucl_determinant = ExtendedEuclidean(alpha_len, key_identity_iter)
                
            if ext_eucl_determinant[0] != 1:
                inverted_key = zeros((len(key), len(key)))
                return inverted_key
            elif ii != i:
                key_identity_matrix[i, :] = ((key_identity_matrix[i, :] + key_identity_matrix[ii, :]) % alpha_len)
                
            key_identity_matrix[i, :] = ((ext_eucl_determinant[2] * key_identity_matrix[i, :]) % alpha_len)
            
            for j in range(len(key)):
                if j != i:
                    key_identity_iter = key_identity_matrix[j][i]
                    key_identity_matrix[j, :] = ((key_identity_matrix[j, :] - key_identity_iter * key_identity_matrix[i, :]) % alpha_len)

        inverted_key = key_identity_matrix[:, len(key): (2 * len(key))]
        
        return inverted_key