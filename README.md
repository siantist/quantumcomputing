# quantumcomputing
Trying running this code in Intel Quantum SDK.


Ideas:
How to speed up (common nbd product of graphs) search for edges

How to speed up kronecker product matrix multiplication (On the Kronecker Product, Kathrin Schacke); use tropical semirings for Sylvester/Lyapunov eqns

How to use cycle bases as a bases, how to write the cycle bases in terms of qbits (?) and how to write min weight cycle basis algorithm

quantum random walk? quantum mcmc algorithm? tropical semiring as hermitian matrix or unitary matrix?
quantum estimation of eigenvalues ? (caucy interlacing law in terry tao book)

Differential Privacy with quantum circuits (teleportation between Alice and Bob) ?

Notes from Programming Quantum Computers:
pg. 185: Matrix Encodings
Obvious way of encoding m x n matrix is to employ m QPU registers, each of length log_2 (n), to amplitude-encode each row of the matrix as if it was a vector. 

links:
https://towardsdatascience.com/a-practical-guide-to-quantum-amplitude-amplification-dbcbe467044a

https://link.springer.com/content/pdf/10.1007/s11424-019-9008-0.pdf
pg. 16 
(how to use the results of) quantum eigenphase decomposition, quantum SVE, quantum linear solver
