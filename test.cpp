


#include <iostream>
#include <vector>
#include <cblas.h>  // Include BLAS header

#define N 9  // Matrix size

int main() {
    std::vector<double> A(N * N);  // 9×9 matrix stored in a 1D vector

    // Fill the matrix with values using BLAS (cblas_dcopy)
    double value = 1.0; // Value to initialize (can be changed)
    for (int i = 0; i < N; ++i) {
        cblas_dcopy(N, &value, 0, &A[i * N], 1);  // Copy value to each row
    }

    // Print the matrix
    std::cout << "9x9 Matrix:\n";
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            std::cout << A[i * N + j] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
