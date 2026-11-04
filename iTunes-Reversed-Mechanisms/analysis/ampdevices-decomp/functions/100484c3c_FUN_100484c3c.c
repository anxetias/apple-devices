// name: FUN_100484c3c
// address: 100484c3c

int FUN_100484c3c(long param_1,int param_2)

{
  int iVar1;
  undefined1 local_38 [8];
  int local_30;
  
  FUN_10031c728(param_2,local_38);
  if (param_1 != 0) {
    if (param_2 == 0x7e) {
      iVar1 = *(int *)(param_1 + 0x434);
    }
    else {
      if (param_2 != 3) {
        return local_30;
      }
      iVar1 = *(int *)(param_1 + 0x430);
    }
    if (iVar1 != 0) {
      local_30 = iVar1;
    }
  }
  return local_30;
}

