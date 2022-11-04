//
//  new_algo_start_here.cpp
//  quantum_coding
//
//  Created by Serena Sian Yuan on 10/24/22.
//

#include "new_algo_start_here.hpp"


/// Quantum intrinsic function definitions
#include <clang/Quantum/quintrinsics.h>

/// Quantum Runtime Library APIs
#include <quantum.hpp>

/// Define our quantum resources
const int N = 3; // handle for number of qubits
qbit q[N];       // register of qubits to operate on
qbit q2[N];   // another register of qubits
cbit c[N];       // register of measurement readouts
cbit c2[N]; // another register of measurement readouts

/// Can define additional arrays or variables here, must be global
/// For example, 'qbit ancilla[3];'

/// Define resources to pass numerical values from the classical functions to
/// the quantum_kernel
/// This is only required for quantum_kernels that contain algorithms that
/// require dynamic parameters.
double param[2];


/// prepare each of the qubits in q
quantum_kernel void prepare_all()
{
    for (int i = 0; i < N; i++)
    {
        PrepZ(q[i]);
    }
}

/// measure each qubit in q and store each measurement outcome in c
quantum_kernel void measure_all()
{
    for (int i = 0; i < N; i++)
    {
      MeasZ(q[i], c[i]);
    }
}

/// Define custom operations using the built-in quantum gates
quantum_kernel void custom_operation(qbit q1, qbit q2)
{
    /// Add quantum logic operations here
    RX(q1, param[0]);
    RX(q2, param[1]);
}

// Your own custom operation : (write)
quantum_kernel void custom_op(qbit q1, qbit q2) {
    Hadamard(q1);
    X(q2);
    
}
// generate random byte
quantum_kernel void random_byte() {
    // write, had, read
    for (int i = 0; i < N; i++)
    {
        PrepZ(q2[i]); //
    }
    Hadamard(q2)
    
    for (int i = 0; i < N; i++)
    {
      MeasZ(q2[i], c2[i]);
    }
    
}

quantum_kernel void test_function()
{
    /// Add logic here
    custom_operation(q[0], q[1]);
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

    param[0] =  15.0;
    param[1] =     30.0;

    test_function();
    measure_all();
    // how to print out c?
    //print(c)
    std::cout << "c is " << c << "%\n";
    
    std::cout << "done"; 
    return 0;
}
