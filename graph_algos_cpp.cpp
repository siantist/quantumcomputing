//
//  graph_algos_cpp.cpp
//  quantum_coding
// https://medium.com/geekculture/graph-algorithms-in-c-161d2d3c245
//  Created by Serena Sian Yuan on 10/24/22.
// also matrix multiplication algorithms
// https://www.programiz.com/cpp-programming/examples/matrix-multiplication

#include "graph_algos_cpp.hpp"

/// Quantum intrinsic function definitions
#include <clang/Quantum/quintrinsics.h>

/// Quantum Runtime Library APIs
#include <quantum.hpp>

N= 5
qbit q[N];
// matrix of qbits
std::vector<qbit> vq[N];

qbit qmatrix[3][3];

// matrix
std::vector<std::vector<qbit>> qmat;

int** mult(a,b) {
    r1 = sizeof((a)
    c2 = sizeof(b)
    
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c2; ++j)
            for(k = 0; k < r1; ++k) {
                mult[i][j] += a[i][k] * b[k][j];
                }
    return mult
}

std::vector<std::vector<int>> create2DArray(unsigned height, unsigned width)
{
   return std::vector<std::vector<int>>(height, std::vector<int>(width, 0));
}

// boolean matrix mult ( max min {a, b})
std::vector<std::vector<int>> boolean_mat_mult(a,b) {
    // implement the orig algorithm
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c2; ++j)
            for(k = 0; k < n; k++)
                    {
                        value ||= a[i][k] && b[k][j];
                        if(value)
                            break; // early out
                    }
                    c[i][j] = value;
    
    return c
}

std::vector<std::vector<int>> boolean_mat_mult_min_max(a,b) {
    // implement the orig algorithm
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            temp_array = std::vector<int>;
            for (k=0; k<n; k++) {
                temp1 = a[i][k]
                temp2 = b[k][j]
                temp_array.push_back(std::min(temp1, temp2))
            
        }
        temp_max = std::max(temp_array)
        c[i][j] = temp_max
    
            
}

// build a matrix of qubits ?

quantum_kernel void prepare_all()
{
    for (int i = 0; i < N; i++)
    {
        PrepZ(q[i]);
        // prepare the matrix
        for (int j=0; j<N; j++) {
            PrepZ(qmat[i][j])
        }
            
    }
    
}
                
void print_matrix(matrix) {
    n = sizeof(matrix)
    for(int x=0;x<n;x++)  // loop 3 times for three lines
        {
            for(int y=0;y<n;y++)  // loop for the three elements on the line
            {
                cout<<matrix[x][y];  // display the current element out of the array
            }
        cout<<endl;  // when the inner loop is done, go to a new line
        }
}

// entangle certain rows and then only perform min/max once 

int main()
{
    int a[5][5], b[5][5], mult[5][5], i, j, k, n;
    // initialize mult
    n1 = 5
        
    for(i = 0; i < r1; ++i)
            for(j = 0; j < c2; ++j)
            {
                mult[i][j]=0;
                a[i][j] = rand();
                b[i][j] = rand();
            }

    print_matrix(a)
    
        
    
        
    
}
