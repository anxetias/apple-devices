// name: FUN_10037889c
// address: 10037889c

bool FUN_10037889c(int *param_1)

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
  cVar1 = FUN_10017cbd0();
  if ((cVar1 == '\0') || (*param_1 != 0x41464350)) {
    bVar4 = false;
  }
  else {
    lVar2 = FUN_10036f8fa(param_1[6]);
    if (lVar2 == 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure";
        local_2c = 0x822;
        local_2a = "afcVolumeInfo != nullptr";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
      bVar4 = false;
      FUN_1001782e9(0,0);
    }
    else {
      bVar4 = *(long *)(lVar2 + 0x6b0) != 0;
      FUN_10036d4d2(lVar2);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

