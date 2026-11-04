// name: FUN_10052db70
// address: 10052db70

undefined8 FUN_10052db70(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *in_R9;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long **)(param_1 + 0x558) == (long *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      uStack_34 = 0x7a0a90;
      uStack_30 = 1;
      local_2c = 0x822;
      local_2a = "mSubDataHandler != __null";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0x234f;
  }
  else {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x558) + 0x90))();
    if ((int)uVar2 == 0) {
      *(long *)(param_1 + 0x550) = *(long *)(param_1 + 0x550) + CONCAT44(uStack_34,local_38);
    }
    if (in_R9 != (undefined8 *)0x0) {
      *in_R9 = CONCAT44(uStack_34,local_38);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

