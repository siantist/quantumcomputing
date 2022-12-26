//
//  lagraph1.cpp
//  quantum_coding
//
//  Created by Serena Sian Yuan on 12/14/22.
// notes: GrB_vxm(w, mask, accum, semiring, u, A, desc)
// Multiplies a (row)vector with a matrix on an semiring. The result is a vector.
// https://arxiv.org/pdf/2104.01661.pdf
// https://github.com/PASSIONLab/CombBLAS <- must code in c++

#include "lagraph1.hpp"
#include "LAGraph.h"

//to do: they have BFS in GraphBLAS_UserGuide, try DFS instead

int main(void) {
    // initialize LAGraph
    char msg [LAGRAPH_MSG_LEN] ;
    LAGraph_Init (msg) ;
    GrB_Matrix A = NULL ;
    GrB_Vector centrality = NULL ;
    LAGraph_Graph G = NULL ;
    
    // read a Matrix Market file from stdin and create a graph
    LAGraph_MMRead (&A, stdin, msg) ;
    LAGraph_New (&G, &A, LAGraph_ADJACENCY_UNDIRECTED, msg) ;

    // compute the out-degree of every node
    LAGraph_Cached_OutDegree (G, msg) ;
    
    // compute the pagerank
    int niters = 0 ;
    LAGr_PageRank (&centrality, &niters, G, 0.85, 1e-4, 100, msg) ;

    // print the result
    LAGraph_Vector_Print (centrality, LAGraph_COMPLETE, stdout, msg) ;

    // free the graph, the pagerank, and finish LAGraph
    LAGraph_Delete (&G, msg) ;
    GrB_free (&centrality) ;
    LAGraph_Finalize (msg) ;
}
