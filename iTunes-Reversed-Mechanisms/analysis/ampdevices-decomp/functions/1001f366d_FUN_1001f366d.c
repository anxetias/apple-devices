// name: FUN_1001f366d
// address: 1001f366d

undefined8 FUN_1001f366d(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  long local_30;
  uint local_24;
  
  if (param_4 != 0) {
    local_30 = 0;
    iVar1 = FUN_1001de13c(param_3,param_4,&local_30,&local_24);
    uVar2 = 0;
    if (local_30 != 0 && iVar1 == 0) {
      if (1 < local_24) {
        local_24 = (int)local_24 >> 1;
        uVar2 = FUN_1001f2c28(param_1,param_2);
      }
    }
    return uVar2;
  }
  return 0;
}

