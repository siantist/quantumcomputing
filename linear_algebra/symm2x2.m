//  A quantum circuit for the block encoding of a 2 × 2 symmetric matrix A.
C = qclab . QCircuit (3);
C . push_back ( qclab . qgates . Hadamard (1));
C . push_back ( qclab . qgates . RotationY (0 , phi1 ));
C . push_back ( qclab . qgates . CNOT (1 ,0));
C . push_back ( qclab . qgates . RotationY (0 , phi2 ));
C . push_back ( qclab . qgates . CNOT (1 ,0));
C . push_back ( qclab . qgates . CNOT (1 ,2));
C . push_back ( qclab . qgates . Hadamard (1));
