#include "all_gates_q9.hpp"

/// Quantum intrinsic function definitions
#include <clang/Quantum/quintrinsics.h>

/// Quantum Runtime Library APIs
#include <quantum.hpp>

const int N = 9;
qbit q[N];
cbit c[N];

quantum_kernel void all_gates() {

  for (int i = 0; i < 3; i++) {
    PrepX(q[i]);
  }

  for (int i = 3; i < 6; i++) {
    PrepY(q[i]);
  }

  for (int i = 6; i < N; i++) {
    PrepZ(q[i]);
  }

  H(q[0]);

  X(q[1]);

  Y(q[2]);

  Z(q[3]);

  S(q[4]);

  Sdag(q[5]);

  T(q[6]);

  Tdag(q[7]);

  RX(q[3], 3.141592653589793);

  RY(q[4], 3.141592653589793);

  RZ(q[5], 3.141592653589793);

  CNOT(q[5], q[6]);

  CZ(q[2], q[4]);

  SWAP(q[1], q[3]);

  Toffoli(q[0], q[1], q[2]);

  CPhase(q[3], q[4], 1.570796326794896);

  RXY(q[5], 4.712388980384689, 0.785398163397448);

  SwapA(q[6], q[7], 1.963495408493621);

  for (int i = 0; i < 3; i++) {
    MeasX(q[i], c[i]);
  }

  for (int i = 3; i < 6; i++) {
    MeasY(q[i], c[i]);
  }

  for (int i = 6; i < N; i++) {
    MeasZ(q[i], c[i]);
  }

  release_quantum_state();
}
