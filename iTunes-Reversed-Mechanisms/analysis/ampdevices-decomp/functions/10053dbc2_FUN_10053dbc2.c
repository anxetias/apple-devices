// name: FUN_10053dbc2
// address: 10053dbc2

undefined8 FUN_10053dbc2(long *param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar2 = 0;
  if ((char)param_1[0x9c] == '\x01') {
    if ((int)param_1[3] == 0x46494c45) {
      if (*(char *)((long)param_1 + 0x14) == '\x01') {
        (**(code **)(*param_1 + 0xb0))(param_1);
        *(undefined1 *)((long)param_1 + 0x14) = 0;
      }
    }
    else {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure";
        local_2c = 0x822;
        local_2a = "mTrackKind == kITFileKind";
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
      FUN_1001782e9(0,0);
      uVar2 = 0xffffffce;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

