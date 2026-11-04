// name: FUN_1003d2bbb
// address: 1003d2bbb

void FUN_1003d2bbb(void *param_1)

{
  void *pvVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar2 = FUN_100601c1f();
  if (cVar2 == '\0') {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "IPodSyncContextIsValid(context)";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    pvVar1 = *(void **)((long)param_1 + 0x20);
    if (pvVar1 != (void *)0x0) {
      FUN_10022ad5e(pvVar1);
      operator_delete(pvVar1);
    }
    cVar2 = FUN_1001e96b8((long)param_1 + 0x4c8);
    if (cVar2 != '\0') {
      iVar3 = FUN_1001e9bb5((long)param_1 + 0x4c8);
      if ((iVar3 != -0x80) && (iVar3 != 0)) {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x400;
          local_3a = (char *)CONCAT44(local_3a._4_4_,iVar3);
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x12);
        }
      }
    }
    operator_delete(param_1);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

