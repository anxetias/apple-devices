// name: FUN_1001d0525
// address: 1001d0525

int FUN_1001d0525(undefined8 param_1,undefined4 param_2,uint param_3,long param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_50 [4];
  uint local_4c;
  undefined1 local_48;
  undefined1 local_46;
  undefined4 local_44;
  long local_40;
  
  if ((param_3 & 1) == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006b0a9e(uVar3);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
  }
  else {
    iVar2 = FUN_1001cf1e5();
    if (iVar2 == 0) {
      iVar2 = FUN_1001cf1e5(param_4);
      if (iVar2 == 0) {
        FUN_1001c62d9(local_50,0x20);
        local_46 = 1;
        local_48 = 1;
        local_44 = 8;
        local_4c = param_3;
        local_40 = param_4;
        iVar2 = FUN_1001d0338(param_1,param_2,local_50);
        if (iVar2 == 0) {
          *(int *)(param_4 + 4) = *(int *)(param_4 + 4) + 1;
          iVar2 = 0;
        }
      }
      else {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          FUN_1006b0a32(iVar2,uVar3);
        }
      }
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_1006b09c6(iVar2,uVar3);
      }
    }
  }
  return iVar2;
}

