// name: FUN_10031ab0f
// address: 10031ab0f

undefined8 FUN_10031ab0f(long param_1,undefined2 *param_2,char param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (undefined2 *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_2a = "audioFormat != nullptr";
LAB_10031ac1d:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
  }
  else {
    *param_2 = 0;
    if (((param_1 != 0) && (*(long *)(param_1 + 8) != 0)) &&
       (*(long *)(*(long *)(param_1 + 8) + 0x10) != 0)) {
      if (((param_3 == '\0') || (*(short *)(param_1 + 0x58) != 0)) ||
         (uVar2 = FUN_10031ac4c(param_1), (int)uVar2 == 0)) {
        *param_2 = *(undefined2 *)(param_1 + 0x58);
        uVar2 = 0;
      }
      goto LAB_10031abcf;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_2a = "TrackInstanceIsValid(trackInstance)";
      goto LAB_10031ac1d;
    }
  }
  FUN_1001782e9(0,0);
  uVar2 = 0xffffffce;
LAB_10031abcf:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar2;
}

