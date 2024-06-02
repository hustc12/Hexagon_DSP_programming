#include <stdio.h>

void matmul_vanilla(float * out, float *matA, float *matB, int M, int N, int K) {
  // shape(matA) = M x K; shape(matB) = K x N; shape(out) = M x N
  for (int i=0; i<M; i++) {
    for (int j=0; j<N; j++) {
    
    }
  }
}

void matmul(float *out, float *matA, float *matB, int M, int N, int K) {
  // shape(matA) = M x K; shape(matB) = K x N; shape(out) = M x N
}

void print_matrix(float *mat, int M, int N) {
   // Print the out
  for (int rowIdx=0; rowIdx<M; rowIdx++) {
    for (int colIdx=0; colIdx<N; colIdx++) {
      printf("%f\t", mat[M*rowIdx + colIdx]);
    }
    printf("\n");
  }
}

int main() {
  float matA[2*3] = {
                     1.0, 2.0, 3.0, 
                     2.0, 3.0, 4.0
                    };
  float matB[3*4] = {
                     1.0, 2.0, 3.0, 4.0,
                     2.0, 3.0, 4.0, 5.0,
                     3.0, 4.0, 5.0, 6.0 
                    };
  float out[2*4] = {
                     0.0, 0.0, 0.0, 0.0,
                     0.0, 0.0, 0.0, 0.0
                   };
  matmul_vanilla(out, matA, matB, 2, 4, 3);
  print_matrix(out, 2, 4);
  return 0;
}
