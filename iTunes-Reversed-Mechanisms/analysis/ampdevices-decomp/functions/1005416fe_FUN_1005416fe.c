// name: FUN_1005416fe
// address: 1005416fe

ulong FUN_1005416fe(long param_1)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  ushort uVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_1 + 0xfe0) == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "mCoreMediaItem != __null";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    uVar4 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    cVar1 = FUN_100440388();
    uVar4 = 2;
    if (cVar1 != '\0') {
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
        uVar2 = FUN_100443bd8(*(undefined8 *)(param_1 + 0xfe0));
        return uVar2;
      }
      goto LAB_1005417e9;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return (ulong)uVar4;
  }
LAB_1005417e9:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

