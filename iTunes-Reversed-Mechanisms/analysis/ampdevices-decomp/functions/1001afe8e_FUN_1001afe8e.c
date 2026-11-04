// name: FUN_1001afe8e
// address: 1001afe8e

undefined8 FUN_1001afe8e(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_20;
  
  if (*(int *)(param_1 + 8) == 0) {
    local_20 = DAT_100700458;
  }
  else {
    uVar3 = FUN_1001afbbd();
    lVar4 = _objc_retainAutoreleasedReturnValue(uVar3);
    if (lVar4 == 0) {
      local_20 = DAT_100700458;
      if (DAT_10089fb08 == '\0') {
        FUN_1001c38e0("warning> Failed to get display scale factor, returning 1. (%u)",
                      *(undefined4 *)(param_1 + 8));
        DAT_10089fb08 = '\x01';
      }
    }
    else {
      local_20 = (*(code *)PTR__objc_msgSend_10082c770)(lVar4,PTR_s_backingScaleFactor_10088c180);
    }
    (*(code *)PTR__objc_release_10082c7b0)(lVar4);
  }
  if (DAT_10089fb09 == '\0') {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = _CGMainDisplayID();
    if (iVar1 == iVar2) {
      FUN_1001c38e0(local_20,"info> Scale factor of main display = %.1f");
      DAT_10089fb09 = '\x01';
    }
  }
  return local_20;
}

