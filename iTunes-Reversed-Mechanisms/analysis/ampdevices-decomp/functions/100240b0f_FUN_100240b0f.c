// name: FUN_100240b0f
// address: 100240b0f

long FUN_100240b0f(long param_1,undefined4 param_2,undefined8 param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_1001ee056();
  if (cVar1 == '\0') {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "JRIsCurrentThreadCooperative()";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    lVar2 = 0;
    FUN_1001782e9(0,1);
  }
  else {
    if ((param_1 != 0) && (*(int *)(param_1 + 4) != 0)) {
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
        lVar2 = FUN_10030252b(param_1);
        return lVar2;
      }
      goto LAB_100240c4f;
    }
    for (lVar4 = FUN_100306d78(); lVar4 != 0; lVar4 = FUN_100306e32(lVar4)) {
      if ((*(int *)(lVar4 + 0x84) != 0x706d6574) &&
         (lVar2 = FUN_100301c98(lVar4,param_2,param_3), lVar2 != 0)) goto LAB_100240be1;
    }
    lVar2 = 0;
  }
LAB_100240be1:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return lVar2;
  }
LAB_100240c4f:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

