// name: FUN_1001babfe
// address: 1001babfe

ulong * FUN_1001babfe(ulong *param_1)

{
  if (*param_1 < param_1[2]) {
    FUN_1001bab26(param_1);
    *param_1 = *param_1 + (ulong)((uint)(byte)param_1[4] << ((char)param_1[3] != '\0'));
    *(undefined1 *)((long)param_1 + 0x21) = 0;
  }
  return param_1;
}

