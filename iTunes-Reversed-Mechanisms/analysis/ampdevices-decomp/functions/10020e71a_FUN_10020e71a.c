// name: FUN_10020e71a
// address: 10020e71a

int FUN_10020e71a(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  int local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = 0;
  if ((*(char *)(param_1 + 0x2108) != '\0') ||
     (iVar2 = FUN_1001e9c3e(param_1 + 0x2110), iVar2 == -0x80)) goto LAB_10020e73e;
  if (iVar2 == 0) {
    iVar2 = FUN_1001e9c3e(param_1 + 0x2158);
    if (iVar2 == -0x80) goto LAB_10020e73e;
    if (iVar2 == 0) {
      FUN_10036c73c(FUN_10020e860,param_1);
      *(undefined1 *)(param_1 + 0x2108) = 1;
      iVar2 = 0;
      goto LAB_10020e73e;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
  }
  else {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
  }
  if (cVar1 != '\0') {
    local_2c = 0x400;
    local_34 = "Assertion failure";
    local_38 = 0x8220202;
    local_2a = iVar2;
    __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_38,0x12);
  }
LAB_10020e73e:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

