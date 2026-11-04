// name: FUN_10053152c
// address: 10053152c

undefined4 FUN_10053152c(long *param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  long local_28;
  
  local_28 = 0;
  iVar1 = (**(code **)(*param_1 + 0x68))(param_1,0,&local_28);
  uVar2 = 0;
  if (local_28 < param_2) {
    uVar2 = 0x2351;
  }
  if (iVar1 != 0) {
    uVar2 = 0x2351;
  }
  return uVar2;
}

