// name: FUN_10015ff33
// address: 10015ff33

int FUN_10015ff33(undefined8 param_1,long param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined8 local_40;
  char local_31;
  
  iVar1 = FUN_1001d58b4(&local_40,param_1,1,(param_4 != 0) * '\x02');
  if (iVar1 != 0) {
    return iVar1;
  }
  local_31 = param_4 == 0;
  iVar1 = FUN_100160052(param_2,param_1,1,param_3,local_40);
  if (iVar1 == 0 && local_31 == '\0') {
    iVar1 = FUN_1001d7af8(param_2 + 0x10,param_4,param_3);
    if (iVar1 != 0) goto LAB_10015ffc8;
    iVar1 = FUN_1001d6666(*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
  }
  if (iVar1 == 0) {
    return 0;
  }
LAB_10015ffc8:
  FUN_10016013b(param_2);
  return iVar1;
}

