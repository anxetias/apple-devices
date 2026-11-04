// name: FUN_1002cd30e
// address: 1002cd30e

undefined8 FUN_1002cd30e(long param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(int *)(param_1 + 8) == 0x61616365) {
    if (param_4 == 0) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_2a = "targetBitRate != 0";
        goto LAB_1002cd424;
      }
    }
    else {
      if (param_5 - 1U < 2) {
        if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
          uVar2 = FUN_10022c4dc();
          return uVar2;
        }
        goto LAB_1002cd46e;
      }
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_2a = "(numChannels == 1) or (numChannels == 2)";
        goto LAB_1002cd424;
      }
    }
  }
  else {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_2a = "mMagic == kAACEncoderMagic";
LAB_1002cd424:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: err == (%d)",&local_38,0x16);
    }
  }
  FUN_1001782e9(0,0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return 0xffffffce;
  }
LAB_1002cd46e:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

