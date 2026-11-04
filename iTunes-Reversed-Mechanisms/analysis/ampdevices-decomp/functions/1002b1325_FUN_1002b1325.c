// name: FUN_1002b1325
// address: 1002b1325

int FUN_1002b1325(long param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 local_4a8;
  char *local_4a4;
  undefined2 local_49c;
  int local_49a;
  undefined4 local_488;
  char *local_484;
  undefined2 local_47c;
  char *local_47a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((param_1 == 0) || (*(long *)(param_1 + 8) == 0)) ||
     (*(long *)(*(long *)(param_1 + 8) + 0x10) == 0)) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_488 = 0x8220202;
      local_484 = "Assertion failure";
      local_47c = 0x822;
      local_47a = "TrackInstanceIsValid(trackInstance)";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_488,0x16);
    }
    iVar2 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x40);
    if (iVar2 == 0) {
      iVar2 = FUN_1002b0559(param_1,0xc2);
      if (iVar2 == 0) {
        iVar2 = FUN_1002b3b9a(param_1,&local_488);
        if (iVar2 != -0x80) {
          if (iVar2 == 0) {
            uVar3 = FUN_10055fab2(*(undefined4 *)(param_1 + 0x3c),&local_488,0,0);
            *(undefined4 *)(param_1 + 0x40) = uVar3;
          }
          else {
            uVar4 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar4,0x10);
            if (cVar1 != '\0') {
              local_4a8 = 0x8220202;
              local_4a4 = "Assertion failure";
              local_49c = 0x400;
              local_49a = iVar2;
              __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_4a8,0x12);
            }
          }
        }
      }
      iVar2 = *(int *)(param_1 + 0x40);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

