// name: FUN_10052c720
// address: 10052c720

int FUN_10052c720(long param_1,long param_2,undefined8 param_3,undefined8 param_4,uint param_5,
                 long *param_6)

{
  long *plVar1;
  int iVar2;
  long local_38;
  
  local_38 = 0;
  if (*(long *)(param_1 + 0x5a0) == 0) {
    iVar2 = -0x26;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x5a8);
    if (iVar2 == 0) {
      FUN_1001e9de0();
      iVar2 = FUN_100188151(*(undefined8 *)(param_1 + 0x5a0),param_2,param_3,param_4,~param_5 & 1,
                            &local_38);
      *(long *)(param_1 + 0x510) = local_38 + param_2;
      FUN_1001e9eb9(param_1 + 0x550);
      if (param_6 != (long *)0x0) {
        *param_6 = local_38;
      }
      if ((*(char *)(param_1 + 0x500) == '\x01') &&
         (*(ulong *)(param_1 + 0x508) < (ulong)(local_38 + param_2))) {
        *(long *)(param_1 + 0x508) = local_38 + param_2;
      }
      plVar1 = *(long **)(param_1 + 0x4e8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x10))(plVar1,param_1,param_2,param_3,param_4);
      }
    }
  }
  return iVar2;
}

