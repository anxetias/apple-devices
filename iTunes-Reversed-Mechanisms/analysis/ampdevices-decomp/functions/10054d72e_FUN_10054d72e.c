// name: FUN_10054d72e
// address: 10054d72e

void FUN_10054d72e(long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  int local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long **)(param_1 + 0x38) != (long *)0x0) {
    lVar3 = (**(code **)(**(long **)(param_1 + 0x38) + 0x160))();
    if (lVar3 != 0) {
      iVar2 = FUN_100532da5(lVar3);
      if ((iVar2 != -0x80) && (iVar2 != 0)) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x400;
          local_3a = iVar2;
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x12);
        }
      }
    }
    (**(code **)(**(long **)(param_1 + 0x38) + 0x1d0))();
    FUN_100295c56((undefined8 *)(param_1 + 0x38));
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

