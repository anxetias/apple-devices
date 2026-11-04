// name: FUN_1002402ff
// address: 1002402ff

undefined4 FUN_1002402ff(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = FUN_10016ff43(DAT_1008c4d90);
  if (lVar3 == 0) {
    uVar4 = FUN_1001cc310();
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "url != __null";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar4);
    FUN_1001782e9(0,0);
    if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) goto LAB_1002403fc;
    uVar2 = 0xffffff94;
  }
  else {
    uVar2 = _PasteboardSetPasteLocation(*(undefined8 *)(param_1 + 0x78),lVar3);
    FUN_10017060f(lVar3);
    if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
LAB_1002403fc:
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
  }
  return uVar2;
}

