// name: FUN_1002c3ac1
// address: 1002c3ac1

undefined1 FUN_1002c3ac1(long param_1)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 local_40 [8];
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  int local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(char *)(param_1 + 0x81) == '\x01') {
    _PasteboardSynchronize(*(undefined8 *)(param_1 + 0x78));
    iVar3 = _PasteboardGetItemCount(*(undefined8 *)(param_1 + 0x78),local_40);
    if (iVar3 != -0x80) {
      if (iVar3 == 0) {
        uVar1 = 1;
        goto LAB_1002c3b38;
      }
      uVar4 = FUN_1001cc310();
      uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure";
        local_2c = 0x400;
        local_2a = iVar3;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_38,0x12);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar4);
    }
  }
  uVar1 = 0;
LAB_1002c3b38:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

