// name: FUN_100443a6e
// address: 100443a6e

void FUN_100443a6e(undefined4 param_1,long param_2,char param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_2 + 0x4b0) == 0) {
    FUN_10043f63a(param_2);
    if (*(long *)(param_2 + 0x4b0) != 0) goto LAB_100443ab6;
    uVar2 = FUN_1001cc310(param_1);
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "mCoreMediaPlayer != __null";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
LAB_100443ab6:
    _AVCFPlayerSetVolume();
    if (param_3 != '\0') {
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
        _AVCFPlayerSetMuted(*(undefined8 *)(param_2 + 0x4b0),param_3 == '\x01');
        return;
      }
      goto LAB_100443b78;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
LAB_100443b78:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

