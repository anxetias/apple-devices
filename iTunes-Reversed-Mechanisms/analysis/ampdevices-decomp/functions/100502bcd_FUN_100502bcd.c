// name: FUN_100502bcd
// address: 100502bcd

bool FUN_100502bcd(void)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar2 = FUN_1004de07b();
  if (lVar2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "handlerData != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    bVar4 = false;
    FUN_1001782e9(0,0);
  }
  else if (*(char *)(lVar2 + 0x6abd) == '\0') {
    bVar4 = false;
  }
  else {
    bVar4 = *(int *)(lVar2 + 0x166d4) == 6;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

