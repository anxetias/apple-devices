// name: FUN_10039d9d4
// address: 10039d9d4

ulong FUN_10039d9d4(long param_1,undefined1 param_2,undefined8 param_3,undefined1 *param_4,
                   undefined8 *param_5)

{
  long *plVar1;
  char cVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 unaff_R13;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 1;
  }
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = 0;
  }
  plVar1 = *(long **)(param_1 + 8);
  if ((plVar1 == (long *)0x0) || (*(long *)(param_1 + 0x10) == 0)) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = 
      "(mIPodUpdaterController != nullptr) && (mMobileDeviceUpdaterController != nullptr)";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    uVar3 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    cVar2 = (**(code **)(*plVar1 + 0x28))(plVar1,param_2,param_3,param_4,param_5);
    uVar3 = CONCAT71((int7)((ulong)unaff_R13 >> 8),1);
    if (cVar2 == '\0') {
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
                    /* WARNING: Could not recover jumptable at 0x00010039da7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(**(long **)(param_1 + 0x10) + 0x28))
                          (*(long **)(param_1 + 0x10),param_2,param_3,param_4,param_5);
        return uVar3;
      }
      goto LAB_10039db11;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar3 & 0xffffffff;
  }
LAB_10039db11:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

