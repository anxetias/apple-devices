// name: FUN_1005e26d9
// address: 1005e26d9

void FUN_1005e26d9(undefined1 param_1,undefined1 param_2)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  int local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  for (lVar4 = FUN_100306d78(); lVar4 != 0; lVar4 = FUN_100306e32(lVar4)) {
    uVar1 = FUN_1001c19de();
    iVar3 = FUN_100316f84(lVar4,param_1,uVar1,param_2);
    if ((iVar3 != -0x80) && (iVar3 != 0)) {
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = iVar3;
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

