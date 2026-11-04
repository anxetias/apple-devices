// name: FUN_100442fb8
// address: 100442fb8

undefined8
FUN_100442fb8(long param_1,long param_2,undefined8 param_3,undefined4 param_4,undefined8 param_5,
             undefined1 param_6,undefined8 param_7)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((*(long *)(param_1 + 0x498) == 0) && (FUN_10043e902(param_1), *(long *)(param_1 + 0x498) == 0)
     ) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "mAsset != __null";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    lVar2 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    lVar2 = _AVCFAssetCopyAssetTracks();
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      lVar3 = FUN_10017076e(lVar2);
      if (0 < lVar3) {
        lVar6 = 0;
        do {
          lVar4 = FUN_100170853(lVar2,lVar6);
          if (lVar4 != 0) {
            if (param_2 != 0) {
              uVar5 = _AVCFAssetTrackGetMediaType(lVar4);
              cVar1 = FUN_100170633(uVar5,param_2);
              if (cVar1 == '\0') goto LAB_100443088;
            }
            cVar1 = FUN_100443148(lVar4,param_3,param_4,param_5,param_6,param_7);
            if (cVar1 != '\0') {
              uVar5 = FUN_1001705fc(lVar4);
              goto LAB_1004430bd;
            }
          }
LAB_100443088:
          lVar6 = lVar6 + 1;
        } while (lVar3 != lVar6);
      }
    }
  }
  uVar5 = 0;
LAB_1004430bd:
  FUN_10017060f(lVar2);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}

