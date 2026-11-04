// name: FUN_10049592a
// address: 10049592a

undefined8 FUN_10049592a(long param_1,void *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_100495380();
  if (cVar1 == '\0') {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "ITImageLibraryIsValid(imageLibrary)";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: err == (%d)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffce;
  }
  else {
    if (param_2 == (void *)0x0) {
      FUN_1001c62d9((void *)(param_1 + 0xb78),0x420);
      *(undefined1 *)(param_1 + 0xf98) = 0;
    }
    else {
      _memcpy((void *)(param_1 + 0xb78),param_2,0x420);
      *(undefined1 *)(param_1 + 0xf98) = 1;
    }
    uVar2 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

