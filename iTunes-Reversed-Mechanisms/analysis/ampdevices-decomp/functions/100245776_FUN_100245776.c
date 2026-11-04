// name: FUN_100245776
// address: 100245776

undefined8 FUN_100245776(void)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 in_RCX;
  undefined8 in_R8;
  long *in_R9;
  undefined1 local_868 [1056];
  undefined4 local_448;
  char *local_444;
  undefined2 local_43c;
  char *local_43a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (in_R9 == (long *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_448 = 0x8220202;
      local_444 = "Assertion failure";
      local_43c = 0x822;
      local_43a = "propertyList != nullptr";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_448,0x16);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffce;
  }
  else {
    *in_R9 = 0;
    uVar2 = FUN_1002441f8();
    if (((int)uVar2 == 0) && (uVar2 = FUN_1001887a6(&local_448,in_RCX,local_868), (int)uVar2 == 0))
    {
      lVar3 = FUN_10016aa24(DAT_1008c4d90,local_868,in_R8,0);
      *in_R9 = lVar3;
      uVar2 = 0xffffffd5;
      if (lVar3 != 0) {
        uVar2 = 0;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar2;
}

