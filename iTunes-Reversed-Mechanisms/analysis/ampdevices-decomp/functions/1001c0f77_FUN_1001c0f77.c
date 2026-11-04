// name: FUN_1001c0f77
// address: 1001c0f77

uint FUN_1001c0f77(uint param_1)

{
  return param_1 >> 0x18 | (param_1 & 0xff0000) >> 8 | (param_1 & 0xff00) << 8 | param_1 << 0x18;
}

