// name: FUN_10052c35a
// address: 10052c35a

int FUN_10052c35a(long param_1,undefined8 param_2,long param_3,uint param_4,long *param_5)

{
  int iVar1;
  long local_38;
  
  local_38 = 0;
  if (*(long *)(param_1 + 0x5a0) == 0) {
    iVar1 = -0x26;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x5a8);
    if ((iVar1 == 0) &&
       ((*(char *)(param_1 + 0x500) != '\x01' ||
        (iVar1 = 0x2351,
        (ulong)(*(long *)(param_1 + 0x510) + param_3) <= *(ulong *)(param_1 + 0x508))))) {
      FUN_1001e9de0();
      iVar1 = FUN_10017d186(*(undefined8 *)(param_1 + 0x5a0),param_2,param_3,~param_4 & 1,&local_38)
      ;
      *(long *)(param_1 + 0x510) = *(long *)(param_1 + 0x510) + local_38;
      FUN_1001e9eb9(param_1 + 0x550);
      if (param_5 != (long *)0x0 && iVar1 == 0) {
        *param_5 = local_38;
        iVar1 = 0;
      }
    }
  }
  return iVar1;
}

