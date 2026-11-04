// name: FUN_1004968c5
// address: 1004968c5

undefined8 FUN_1004968c5(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 != 0) {
    cVar1 = FUN_100495380(*(undefined8 *)(param_1 + 0x10));
    if (cVar1 != '\0') {
      uVar2 = *(undefined8 *)(param_1 + 0x68);
      goto LAB_10049691b;
    }
  }
  uVar2 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar2,0x10);
  if (cVar1 != '\0') {
    local_38 = 0x8220202;
    local_34 = "Assertion failure";
    local_2c = 0x822;
    local_2a = "ITImageInfoIsValid(imageInfo)";
    __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: err == (%d)",&local_38,0x16);
  }
  uVar2 = 0;
  FUN_1001782e9(0,0);
LAB_10049691b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

