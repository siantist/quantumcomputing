// Example 6.2 in Programming Quantum Computers https://oreilly-qc.github.io/?p=6-2
// pg 111, if continue to apply AA then increase the probability of observing marked value

#include <quantum.hpp>
#include <clang/Quantum/quintrinsics.h>

int number_to_flip = 3;
int number_of_iterations = 4; 

int num_qubits = 4;

qbit q[num_qbits];
cbit c[num_qbits];

/// prepare each of the qubits in q
quantum_kernel void prepare_all()
{
    for (int i = 0; i < N; i++)
    {
        PrepZ(q[i]);
        Hadamard(q[i]); // not sure
    }
}

quantum_kernel void measure_all()
{
    for (int i = 0; i < N; i++)
    {
      MeasZ(q[i], c[i]);
    }
}

quantum_kernel void iterate() {
    for (int i = 0; i < number_of_iterations; i++) {
        CNOT(q[i], number_to_flip)
        Phase(q[i], 180)
        CNOT(q[i], number_to_flip)
} 

}

int main()
{
    /// Setup quantum device
    iqsdk::Iqs_Config iqs_config(/*num_qubits*/ N,
                                 /*simulation_type*/ "noiseless");
    iqsdk::Full_State_Simulator iqs_device(iqs_config);
    if (iqsdk::QRT_ERROR_SUCCESS != iqs_device.ready()) {
      return 1;
    }
    prepare_all();
    iterate();
    measure_all();
  
    return 0;
}
