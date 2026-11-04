// name: FUN_1003a0c96
// address: 1003a0c96

undefined8 FUN_1003a0c96(long param_1,uint param_2,short *param_3)

{
  undefined8 uVar1;
  
  FUN_1001de8ee(param_1 + 0xb8,param_3);
  if (((param_2 & 2) != 0) && (*param_3 == 0)) {
    uVar1 = FUN_1003a0f08(param_1,param_3);
    return uVar1;
  }
  return 0;
}

