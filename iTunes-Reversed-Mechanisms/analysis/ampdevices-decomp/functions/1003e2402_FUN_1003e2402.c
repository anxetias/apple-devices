// name: FUN_1003e2402
// address: 1003e2402

int FUN_1003e2402(undefined8 *param_1)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_1 = 0;
  plVar3 = (long *)FUN_1001c6429(0x10);
  if (plVar3 == (long *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "playCache != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x6c;
  }
  else {
    iVar2 = FUN_1001d7af8(plVar3,2,0x10000);
    if (iVar2 == 0) {
      *param_1 = plVar3;
      iVar2 = 0;
    }
    else {
      if (*plVar3 != 0) {
        FUN_1001d7cd8();
      }
      FUN_1001c64c1(plVar3);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

