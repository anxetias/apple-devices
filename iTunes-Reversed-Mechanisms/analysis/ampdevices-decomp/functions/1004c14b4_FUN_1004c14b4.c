// name: FUN_1004c14b4
// address: 1004c14b4

undefined8
FUN_1004c14b4(long *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  (**(code **)(*param_1 + 0x310))(param_1,1);
  plVar1 = (long *)param_1[0xaa];
  if (plVar1 == (long *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "mMetaDataHandler != __null";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
      return 0xffffffce;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
                    /* WARNING: Could not recover jumptable at 0x0001004c1534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*plVar1 + 0xf8))(plVar1,param_2,param_3,param_4,param_5);
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

