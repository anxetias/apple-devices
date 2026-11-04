// name: FUN_10049cf4a
// address: 10049cf4a

undefined8 FUN_10049cf4a(long *param_1,long param_2,long param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  (**(code **)(*param_1 + 0x298))();
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_3 + 0xc0);
  param_1[0x9b] = param_3;
  if (*(int *)(param_2 + 0x18) == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_3a = "inFindParams->trackKind != 0";
LAB_10049d03f:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: err == (%d)",&local_48,0x16);
    }
  }
  else {
    uVar2 = 0;
    if (*(char *)(param_2 + 0x454) != '\0') goto LAB_10049d000;
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_3a = "inFindParams->haveTrackLocation";
      goto LAB_10049d03f;
    }
  }
  FUN_1001782e9(0,0);
  uVar2 = 0xffffffce;
LAB_10049d000:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

