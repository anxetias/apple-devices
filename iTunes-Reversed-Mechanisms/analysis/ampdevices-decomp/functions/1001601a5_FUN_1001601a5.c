// name: FUN_1001601a5
// address: 1001601a5

int FUN_1001601a5(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 in_RAX;
  undefined8 local_28;
  
  local_28 = in_RAX;
  iVar1 = FUN_1001d5bb4(&local_28,param_2,param_3,param_3);
  if (iVar1 == 0) {
    iVar2 = FUN_100160052(param_1,0,1,0,local_28);
    iVar1 = 0;
    if (iVar2 != 0) {
      FUN_10016013b(param_1);
      iVar1 = iVar2;
    }
  }
  return iVar1;
}

