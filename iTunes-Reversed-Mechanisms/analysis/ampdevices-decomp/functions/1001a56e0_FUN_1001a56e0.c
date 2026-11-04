// name: FUN_1001a56e0
// address: 1001a56e0

void FUN_1001a56e0(undefined8 param_1,uint param_2,long param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_38;
  uint local_34;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10069dc8c(uVar2);
    }
    FUN_1001782e9(0,0);
  }
  else {
    uVar2 = FUN_1001a25a0();
    cVar1 = _os_log_type_enabled(uVar2,1);
    if (cVar1 != '\0') {
      local_38 = 0x4000100;
      local_34 = param_2;
      __os_log_impl(0x100000000,uVar2,1,"SCNetwork callback: flags = %x",&local_38,8);
    }
    *(char *)(param_3 + 0x38) = '\x02' - ((param_2 & 6) == 2);
    FUN_1001a59b2(param_3);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

