// name: FUN_1005e654e
// address: 1005e654e

undefined8 FUN_1005e654e(long param_1,uint param_2,short *param_3)

{
  short sVar1;
  undefined8 uVar2;
  
  *param_3 = 0;
  sVar1 = *(short *)(param_1 + 0x62);
  if (sVar1 == 2) {
    FUN_1001de8ee(param_1 + 0xe8,param_3);
  }
  else if ((sVar1 == 0x3e9) || (sVar1 == 1000)) {
    FUN_1005e4722(param_1,2,param_3);
  }
  uVar2 = 0;
  if (((param_2 & 2) != 0) && (*param_3 == 0)) {
    *param_3 = 0;
    FUN_1001c34b7(((param_2 & 0x20) >> 4) + 0x7f0003,param_3);
    uVar2 = 6;
  }
  return uVar2;
}

