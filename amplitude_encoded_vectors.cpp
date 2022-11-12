// http://oreilly-qc.github.io?p=93 , example 9-3: preparing amplitude-encoded vectors

// vector with lengh that is pwr of 2
var vec = [-1, 1,1,5, 5, 6,6,6]; 
// register to amplitude-encode vector
var num_qbits = log2(len(vec));

var amp_enc_reg = qbit[num_qbits];

amplitude_encode(vec, amp_enc_reg); 

// note: check the right cpp function names
