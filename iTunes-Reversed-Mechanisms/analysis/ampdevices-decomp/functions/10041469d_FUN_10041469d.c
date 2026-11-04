// name: FUN_10041469d
// address: 10041469d

void FUN_10041469d(long *param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (long *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_2a = "limiter != nullptr";
LAB_100414792:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
  }
  else {
    if (*param_1 != 0) {
      FUN_1001c62d9(*param_1,(ulong)*(uint *)(param_1 + 1) << 2);
      *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0x24) * (int)param_1[5];
      param_1[2] = 0;
      param_1[3] = DAT_1007114e0;
      *(int *)(param_1 + 4) = (int)param_1[5];
      goto LAB_100414757;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_2a = "limiter->delayBuffer != nullptr";
      goto LAB_100414792;
    }
  }
  FUN_1001782e9(0,0);
LAB_100414757:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

