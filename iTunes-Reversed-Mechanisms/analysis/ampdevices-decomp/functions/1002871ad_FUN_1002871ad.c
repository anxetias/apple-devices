// name: FUN_1002871ad
// address: 1002871ad

int FUN_1002871ad(long param_1,long param_2,undefined4 param_3,long param_4)

{
  int iVar1;
  undefined8 local_40;
  int local_34;
  
  iVar1 = -0x32;
  if (((param_1 != 0) && (param_2 != 0)) && (param_4 != 0)) {
    FUN_1001dccc7(param_2);
    iVar1 = FUN_1001de13c(param_2,param_3,&local_40,&local_34);
    if (iVar1 == 0) {
      local_34 = local_34 >> 1;
      iVar1 = FUN_100287131(param_1,local_40,local_34,param_4);
    }
    FUN_1001dcd18(param_2);
  }
  return iVar1;
}

