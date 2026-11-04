// name: FUN_1002c1591
// address: 1002c1591

void FUN_1002c1591(long param_1,undefined2 *param_2)

{
  ulong uVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "nameList != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    FUN_1001b7e14(&local_48,param_2 + 1,*param_2);
    uVar1 = *(ulong *)(param_1 + 8);
    if (uVar1 < *(ulong *)(param_1 + 0x10)) {
      FUN_1001b7a88(uVar1,&local_48);
      lVar4 = uVar1 + 0x10;
      *(long *)(param_1 + 8) = lVar4;
    }
    else {
      lVar4 = FUN_1001de980(param_1,&local_48);
    }
    *(long *)(param_1 + 8) = lVar4;
    FUN_1001b7a50(&local_48);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

