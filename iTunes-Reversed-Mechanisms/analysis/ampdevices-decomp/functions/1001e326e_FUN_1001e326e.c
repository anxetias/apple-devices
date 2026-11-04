// name: FUN_1001e326e
// address: 1001e326e

void FUN_1001e326e(undefined4 param_1,undefined2 *param_2)

{
  *param_2 = 4;
  param_2[1] = (ushort)(byte)((uint)param_1 >> 0x18);
  param_2[2] = (ushort)((uint)param_1 >> 0x10) & 0xff;
  param_2[3] = (ushort)((uint)param_1 >> 8) & 0xff;
  param_2[4] = (ushort)param_1 & 0xff;
  return;
}

