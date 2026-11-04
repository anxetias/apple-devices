// name: FUN_1004c189e
// address: 1004c189e

undefined8 FUN_1004c189e(long *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(int *)((long)param_1 + 0x1c) == 0x46494c45) {
    (**(code **)(*param_1 + 0x310))(param_1,0);
    plVar1 = (long *)param_1[0xaa];
    if (plVar1 != (long *)0x0) {
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
                    /* WARNING: Could not recover jumptable at 0x0001004c1918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(*plVar1 + 0x58))(plVar1,param_2,param_3,param_4);
        return uVar3;
      }
      goto LAB_1004c19a9;
    }
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "mMetaDataHandler != __null";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return 0xfffffffc;
  }
LAB_1004c19a9:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

