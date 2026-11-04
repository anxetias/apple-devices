// name: FUN_10010721e
// address: 10010721e

undefined8 FUN_10010721e(long *param_1,void *param_2,uint param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(param_1 + 0x481) = 0;
  *(uint *)((long)param_1 + 0x240c) = param_3;
  _memcpy((void *)param_1[0x482],param_2,(ulong)param_3);
  iVar1 = (**(code **)*param_1)(param_1,param_4);
  uVar2 = 0xfffffffe;
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_1 + 0x18))(param_1);
    if (0x10 < iVar1) {
      *(undefined2 *)(param_4 + 0x90) = 1;
      iVar1 = FUN_100107298(param_1,param_4);
      if (iVar1 != 0) {
        return 0xfffffffe;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}

