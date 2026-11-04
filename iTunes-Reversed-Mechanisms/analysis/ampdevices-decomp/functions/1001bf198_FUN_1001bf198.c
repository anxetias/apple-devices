// name: FUN_1001bf198
// address: 1001bf198

int FUN_1001bf198(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 0x88) != 0) {
    uVar3 = FUN_1001cc310();
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006a3634(uVar3);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    FUN_1001782e9(0,0);
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    uVar3 = FUN_1001cc310();
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006a36aa(uVar3);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    FUN_1001782e9(0,0);
  }
  iVar2 = FUN_1001e9c3e(param_1 + 0x40);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      lVar4 = FUN_100172796();
      *(long *)(param_1 + 0x90) = lVar4;
      if (lVar4 == 0) {
        uVar3 = FUN_1001cc310();
        uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          FUN_1006a3796(uVar3);
        }
      }
      else {
        lVar4 = FUN_100172c7d(0,0);
        *(long *)(param_1 + 0x88) = lVar4;
        if (lVar4 != 0) {
          FUN_1001728e7(*(undefined8 *)(param_1 + 0x90),lVar4,
                        *(undefined8 *)PTR__kCFRunLoopCommonModes_10082e110);
          FUN_1001c0fbe(FUN_1001bfade,0,0,0,0);
          return 0;
        }
        uVar3 = FUN_1001cc310();
        uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          FUN_1006a3720(uVar3);
        }
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar3);
      FUN_1001782e9(0,0);
      iVar2 = -0x32;
    }
    else {
      uVar3 = FUN_1001cc310();
      uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_1006a380c(iVar2,uVar3);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    }
  }
  return iVar2;
}

