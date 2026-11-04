// name: FUN_1005e6838
// address: 1005e6838

void FUN_1005e6838(long *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((*(byte *)((long)param_1 + 0x5c) & 2) != 0) {
    (**(code **)(*param_1 + 0xe0))(param_1);
  }
  plVar1 = (long *)param_1[1];
  if (plVar1 == (long *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "trackData != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if ((*(ushort *)((long)param_1 + 0x5c) & 1) != 0) {
      *(ushort *)((long)param_1 + 0x5c) = *(ushort *)((long)param_1 + 0x5c) & 0xfffe;
      (**(code **)(*plVar1 + 0x10))(plVar1,0x41526363,param_1,0,0);
    }
    lVar2 = param_1[0x10];
    if ((int)lVar2 != 0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
                    /* WARNING: Could not recover jumptable at 0x0001005e68dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x10))(plVar1,0x41526d66,param_1,(int)lVar2,0);
        return;
      }
      goto LAB_1005e6964;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
LAB_1005e6964:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

