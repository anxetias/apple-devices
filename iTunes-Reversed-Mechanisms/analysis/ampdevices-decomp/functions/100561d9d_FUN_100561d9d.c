// name: FUN_100561d9d
// address: 100561d9d

undefined8 FUN_100561d9d(uint param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001c62d9(param_3);
  if ((param_1 >> 10 & 1) == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "PhotoImportOptions::ExactlyOnePhotoApplicationSpecified(importOptions)";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffce;
  }
  else {
    if (DAT_1008c2600 != -1) {
      _dispatch_once_f(&DAT_1008c2600,(void *)0x0,FUN_10056177b);
    }
    uVar2 = 0x47b;
    if (DAT_1008c2608 == '\x01') {
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
        uVar2 = FUN_100410a0d(param_1,param_2,param_3);
        return uVar2;
      }
      goto LAB_100561ec9;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar2;
  }
LAB_100561ec9:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

