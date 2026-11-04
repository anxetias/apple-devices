// name: FUN_100352999
// address: 100352999

void FUN_100352999(long param_1)

{
  int *piVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 != 0) {
    piVar1 = (int *)(param_1 + 0xc);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      if (*(int *)(param_1 + 8) == 0x63736574) {
        *(undefined4 *)(param_1 + 8) = 0;
        FUN_1001c64c1();
        return;
      }
      uVar3 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar3,0x10);
      if (cVar2 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure";
        local_2c = 0x822;
        local_2a = "inColumnSet->magic == \'cset\'";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
      FUN_1001782e9(0,0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

