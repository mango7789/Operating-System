**SIMD 指令演示**：取指令、译码、动态流水线都会占用电路的资源：面积、功耗、内存带宽等。因此，现代 CPU/GPU 都实现了在一条指令中完成更多计算的功能。Intel 处理器的 SIMD 经历了 MMX (MM 寄存器)、SSE (扩展为 XMM 寄存器)、AVX (扩展为 YMM 寄存器)、AVX512 (扩展为 ZMM 寄存器) 的发展。