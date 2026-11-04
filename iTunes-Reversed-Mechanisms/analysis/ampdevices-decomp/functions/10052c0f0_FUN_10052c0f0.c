// name: FUN_10052c0f0
// address: 10052c0f0

undefined8 FUN_10052c0f0(long *param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((int)param_1[0x10] != 0x46494c45) {
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
    goto LAB_10052c18f;
  }
  if (param_1[0xb4] == 0) {
LAB_10052c138:
    FUN_1001c62d9(param_1 + 0x16,0x420);
  }
  else {
    (**(code **)(*param_1 + 0x1e8))(param_1);
    if ((int)param_1[0x10] == 0x46494c45) goto LAB_10052c138;
  }
  uVar2 = 0;
  if (*(char *)((long)param_1 + 0x5bd) == '\x01') {
    *(undefined1 *)((long)param_1 + 0x5bd) = 0;
    param_1[0xb8] = 0;
  }
LAB_10052c18f:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

