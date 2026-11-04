// name: FUN_1005401aa
// address: 1005401aa

long FUN_1005401aa(long *param_1,byte param_2)

{
  long lVar1;
  long lVar2;
  
  if (*(int *)((long)param_1 + 0x14) == 0x44574e4c) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_1001757f8(param_1[(ulong)(param_2 ^ 1) + 0xa0]);
    if (lVar1 == 0) {
      lVar1 = (**(code **)(*param_1 + 0x1e0))(param_1,param_2);
      lVar2 = FUN_1001757f8(lVar1);
      param_1[(ulong)(param_2 ^ 1) + 0xa0] = lVar2;
    }
  }
  return lVar1;
}

