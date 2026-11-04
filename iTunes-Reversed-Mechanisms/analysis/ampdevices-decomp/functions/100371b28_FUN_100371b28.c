// name: FUN_100371b28
// address: 100371b28

undefined8 FUN_100371b28(int *param_1,long param_2,undefined4 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_10017cbd0();
  if ((cVar1 == '\0') || (*param_1 != 0x41464350)) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_3a = "JRFileSpecIsAFCPath(target)";
LAB_100371c22:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  else {
    if (param_2 != 0) {
      FUN_1001dfbb3(param_1 + 7,param_2,param_3);
      uVar2 = 0;
      goto LAB_100371ba0;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_3a = "path != nullptr";
      goto LAB_100371c22;
    }
  }
  FUN_1001782e9(0,0);
  uVar2 = 0xffffffce;
LAB_100371ba0:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

