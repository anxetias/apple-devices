// name: FUN_1001bfbd0
// address: 1001bfbd0

int FUN_1001bfbd0(long param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6,long param_7)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  if ((param_6 != 0 || param_7 != 0) && (param_6 == 0 || param_7 == 0)) {
    uVar3 = FUN_1001cc310();
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006a3e6c(uVar3);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    FUN_1001782e9(0,0);
    return -0x32;
  }
  local_20 = 0;
  iVar2 = -0x80;
  if (*(char *)(param_1 + 0x28) == '\0') {
    iVar2 = FUN_1001bf592(param_2,param_3,param_5,param_6,param_7,&local_20);
    if (iVar2 == 0) {
      FUN_1001bfb42(param_1,local_20);
      iVar2 = 0;
      if (*(long *)(param_1 + 0x88) != 0) {
        FUN_100172d47();
        FUN_100172863(*(undefined8 *)(param_1 + 0x90));
      }
    }
    else {
      uVar3 = FUN_1001cc310();
      uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_1006a3ee2(iVar2,uVar3);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    }
  }
  return iVar2;
}

