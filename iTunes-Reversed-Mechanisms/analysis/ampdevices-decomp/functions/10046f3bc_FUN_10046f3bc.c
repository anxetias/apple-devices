// name: FUN_10046f3bc
// address: 10046f3bc

undefined8 FUN_10046f3bc(long param_1)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long local_40;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_40 = 0;
  plVar1 = *(long **)(param_1 + 0x18);
  if (plVar1 == (long *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "mDataHandler != __null";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    uVar4 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    uVar4 = 0;
    iVar3 = (**(code **)(*plVar1 + 0x68))(plVar1,0,&local_40);
    if (iVar3 == 0) {
      if (local_40 == *(long *)(param_1 + 0x38)) {
        uVar4 = 0;
      }
      else {
        *(long *)(param_1 + 0x38) = local_40;
        uVar4 = FUN_1001ebd46();
        *(undefined8 *)(param_1 + 0x40) = uVar4;
        uVar4 = 1;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

