// name: FUN_1005e73f0
// address: 1005e73f0

undefined8 FUN_1005e73f0(undefined8 param_1,int *param_2)

{
  ulong uVar1;
  undefined8 local_18;
  
  if ((param_2[0x1a26] & 0xfffffffeU) == 2) {
    local_18 = FUN_100634e98((short)param_2[0xbb],param_2[0xbc]);
    FUN_1001b7eb0(param_1,local_18);
    FUN_10016d588(&local_18);
  }
  else {
    if (*param_2 == 0x69506f64) {
      uVar1 = *(ulong *)(param_2 + 0x16a) | 0xa270002000000;
    }
    else {
      uVar1 = *(ulong *)(param_2 + 0x18ea);
    }
    FUN_1001bb78a(param_1,"%016llX",uVar1);
  }
  return param_1;
}

