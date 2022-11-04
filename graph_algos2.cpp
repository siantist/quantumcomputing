//
//  graph_algos2.cpp
//  quantum_coding
//
//  Created by Serena Sian Yuan on 10/27/22.
//

#include "graph_algos2.hpp"
#include <iostream>

using namespace std;


template<typename T, size_t N, size_t M>

void printArray(T(&mat)[N][M])
{
    for (int i = 0; i < N; i ++ ) {
        for (int j = 0; j < M; j++ ) {
            cout << mat[i][j] << ' ';
        }
        std::cout << std::endl;
    }
}

int** mult(T(&mat)[N][M], T(&mat2)[N][M]) {
    //r1 = sizeof(a)
    //c2 = sizeof(b)
    
    for(i = 0; i < N; i++)
        for(j = 0; j < M; j++)
            for(k = 0; k < N; k++) {
                mult[i][j] += mat[i][k] * mat2[k][j];
                }
    return mult
}

// entangle certain rows and then only perform min/max once

int main()
{
    int a[5][5], b[5][5], mult[5][5], i, j, k, n;
    // initialize mult
    int n1 = 5;
        
    for(i = 0; i < n1; ++i)
            for(j = 0; j < n1; ++j)
            {
                mult[i][j]=0;
                a[i][j] = rand();
                b[i][j] = rand();
            }

    printArray(a);
    
    c = mult(a,b);
        
    
        
    
}
