// name: FUN_1005d11fe
// address: 1005d11fe

undefined4 FUN_1005d11fe(void)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = _AVCFAssetTrackCopyFormatDescriptions();
  if (lVar3 == 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_2a = "formatDescriptions != __null";
LAB_1005d131a:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
  }
  else {
    lVar4 = FUN_10017076e(lVar3);
    if (lVar4 < 1) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_2a = "JRCFArrayGetCount(formatDescriptions) > 0";
        goto LAB_1005d131a;
      }
    }
    else {
      lVar4 = FUN_100170853(lVar3,0);
      if (lVar4 != 0) {
        uVar2 = _CMFormatDescriptionGetMediaSubType(lVar4);
        goto LAB_1005d134b;
      }
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_2a = "formatDescription != __null";
        goto LAB_1005d131a;
      }
    }
  }
  uVar2 = 0;
  FUN_1001782e9(0,0);
LAB_1005d134b:
  FUN_10017060f(lVar3);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

