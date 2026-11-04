// name: FUN_1001e3312
// address: 1001e3312

undefined1 * FUN_1001e3312(undefined4 param_1,undefined1 *param_2)

{
  *param_2 = (char)((uint)param_1 >> 0x18);
  param_2[1] = (char)((uint)param_1 >> 0x10);
  param_2[2] = (char)((uint)param_1 >> 8);
  param_2[3] = (char)param_1;
  param_2[4] = 0;
  return param_2;
}

