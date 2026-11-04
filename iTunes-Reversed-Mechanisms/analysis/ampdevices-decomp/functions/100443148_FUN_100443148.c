// name: FUN_100443148
// address: 100443148

undefined4
FUN_100443148(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = _AVCFAssetTrackCopyFormatDescriptions();
  if (lVar3 == 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_4a = "formatDescriptions != __null";
LAB_100443295:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    lVar4 = FUN_10017076e(lVar3);
    if (lVar4 < 1) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_4a = "JRCFArrayGetCount(formatDescriptions) > 0";
        goto LAB_100443295;
      }
    }
    else {
      lVar4 = FUN_100170853(lVar3,0);
      if (lVar4 != 0) {
        uVar2 = FUN_1004432f6(lVar4,param_2,param_3,1,param_4,param_5,param_6);
        goto LAB_1004432c6;
      }
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_4a = "formatDescription != __null";
        goto LAB_100443295;
      }
    }
  }
  uVar2 = 0;
  FUN_1001782e9(0,0);
LAB_1004432c6:
  FUN_10017060f(lVar3);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

