// name: FUN_100270a6b
// address: 100270a6b

undefined8 FUN_100270a6b(long param_1,undefined1 param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (DAT_1008a2ea0 != -1) {
    _dispatch_once_f(&DAT_1008a2ea0,(void *)0x0,FUN_100270c0e);
  }
  FUN_1001c62d9(param_1,0x8390);
  lVar2 = FUN_1001c6429(0x700);
  *(long *)(param_1 + 0x50) = lVar2;
  if (lVar2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "frameInfo->data != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    lVar2 = FUN_1001c6429(0x700);
    *(long *)(param_1 + 0x70) = lVar2;
    if (lVar2 != 0) {
      FUN_100270a1c(param_1);
      *(undefined1 *)(param_1 + 0x838c) = param_2;
      uVar3 = 0;
      goto LAB_100270b36;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "frameInfo->mainData != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    FUN_1001c64c1(*(undefined8 *)(param_1 + 0x50));
  }
  uVar3 = 0xffffff94;
LAB_100270b36:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

