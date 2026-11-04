// name: FUN_1004d5e6f
// address: 1004d5e6f

void FUN_1004d5e6f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  int local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = FUN_100308295();
  if (lVar3 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "domainInfo != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else if (*(char *)(lVar3 + 0x44a) == '\0') {
    FUN_1004d59a4(&local_38);
    iVar2 = FUN_1004d5a0e(param_3,&local_38);
    if (iVar2 != 0) {
      FUN_1004d5bc0(param_3,&local_38);
    }
    *(char *)(lVar3 + 0x44a) = (local_38 == 0) + '\x01';
    FUN_1001b7a50();
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

