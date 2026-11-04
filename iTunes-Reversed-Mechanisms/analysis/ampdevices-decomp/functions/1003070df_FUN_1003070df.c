// name: FUN_1003070df
// address: 1003070df

long FUN_1003070df(void)

{
  long lVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar2 = FUN_1001ee056();
  if (cVar2 == '\0') {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "JRIsCurrentThreadCooperative()";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    lVar3 = 0;
    FUN_1001782e9(0,1);
    lVar1 = DAT_1008bbfa8;
  }
  else {
    lVar3 = DAT_1008bbfa8;
    lVar1 = DAT_1008bbfa8;
    if (DAT_1008bbfa8 == 0) {
      for (lVar3 = FUN_100306d78(); lVar3 != 0; lVar3 = FUN_100306e32(lVar3)) {
        lVar1 = lVar3;
        if ((*(byte *)(lVar3 + 0x1bb0) & 1) != 0) goto LAB_100307163;
      }
      lVar3 = 0;
      lVar1 = lVar3;
    }
  }
LAB_100307163:
  DAT_1008bbfa8 = lVar1;
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

