// name: FUN_10029f00f
// address: 10029f00f

void FUN_10029f00f(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 local_78;
  char *local_74;
  undefined2 local_6c;
  int local_6a;
  undefined **local_58;
  code *local_50;
  undefined1 local_48;
  undefined ***local_38;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar2 = FUN_100177d5c(0);
  iVar3 = FUN_1001cd9a6("iPodPhotoCacheLastCleanupTimeSecondsUTC",0,0);
  if (((uVar2 <= iVar3 + 0x93a80U) || (cVar1 = FUN_1001c19cd(), cVar1 != '\0')) ||
     (DAT_1008c5d64 != 0)) goto LAB_10029f0f7;
  local_58 = &PTR_FUN_100845890;
  local_50 = FUN_10029ebe8;
  local_48 = 0;
  local_38 = &local_58;
  iVar3 = FUN_1001b1a89(&local_58,"",&DAT_1008c5d64,0);
  if (local_38 == &local_58) {
    lVar4 = 0x20;
LAB_10029f0be:
    (**(code **)((long)*local_38 + lVar4))();
  }
  else {
    lVar4 = 0x28;
    if (local_38 != (undefined ***)0x0) goto LAB_10029f0be;
  }
  if ((iVar3 != -0x80) && (iVar3 != 0)) {
    uVar5 = FUN_1001cc310();
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_78 = 0x8220202;
      local_74 = "Assertion failure";
      local_6c = 0x400;
      local_6a = iVar3;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_78,0x12);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar5);
  }
LAB_10029f0f7:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

