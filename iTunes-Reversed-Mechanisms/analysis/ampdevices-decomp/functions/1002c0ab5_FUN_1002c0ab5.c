// name: FUN_1002c0ab5
// address: 1002c0ab5

void FUN_1002c0ab5(undefined8 param_1,uint param_2,undefined8 *param_3)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 == (undefined8 *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "idList != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    param_3[1] = *param_3;
    for (lVar3 = FUN_1002f930c(); lVar3 != 0; lVar3 = FUN_1002f9451(lVar3)) {
      uVar2 = FUN_1004744bf(lVar3,0);
      if (((uVar2 & param_2) != 0) && (cVar1 = FUN_1002bd328(lVar3), cVar1 != '\0')) {
        FUN_1002c0d86(param_3);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

