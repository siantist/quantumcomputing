/// Quantum intrinsic function definitions
#include <clang/Quantum/quintrinsics.h>

/// Quantum Runtime Library APIs
#include <quantum.hpp>

// https://github.com/QuantumComputingLab/explicit-block-encodings

const int N = 9;
qbit q[N];
cbit c[N];

quantum_kernel void block_encoding(phi1, phi2) {
  // page 7 quantum circuit for symmetric 2 by 2 matrix
  H(q[1]);

  RY(q[0], phi1);

  CNOT(q[1], q[0]);

  RY(q[0], phi2);
  CNOT(q[1], q[0]);
  CNOT(q[1], q[2]);
  H(q[1]);
}
