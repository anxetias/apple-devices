// name: FUN_10048b2d4
// address: 10048b2d4

long FUN_10048b2d4(long *param_1)

{
  char cVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (long *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "playlistListItem != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    lVar4 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    lVar4 = param_1[2];
    if ((lVar4 == 0) && (lVar4 = *param_1, lVar4 == 0)) {
      plVar2 = (long *)param_1[1];
      if (plVar2 == (long *)0x0) {
        lVar4 = 0;
      }
      else {
        do {
          lVar4 = *plVar2;
          if (lVar4 != 0) break;
          plVar2 = (long *)plVar2[1];
          lVar4 = 0;
        } while (plVar2 != (long *)0x0);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar4;
}

