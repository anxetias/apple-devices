// name: FUN_100598965
// address: 100598965

undefined1 FUN_100598965(long param_1)

{
  float fVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "eq != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    uVar5 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    lVar3 = 0;
    do {
      fVar1 = *(float *)(param_1 + 0x1188 + lVar3 * 4);
      if ((fVar1 != 0.0) || (NAN(fVar1))) {
        uVar5 = 1;
        goto LAB_1005989cb;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 != 10);
    uVar5 = 0;
  }
LAB_1005989cb:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

