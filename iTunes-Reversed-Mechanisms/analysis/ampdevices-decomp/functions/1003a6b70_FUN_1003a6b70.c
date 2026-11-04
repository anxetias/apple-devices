// name: FUN_1003a6b70
// address: 1003a6b70

void FUN_1003a6b70(undefined8 param_1,int param_2,long param_3)

{
  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  int local_38 [3];
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined6 uStack_28;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      pcVar3 = "inKey != 0";
LAB_1003a6c43:
      uStack_2c = 0x822;
      local_38[2] = 1;
      local_38[1] = 0x7a0a90;
      local_38[0] = 0x8220202;
      uStack_2a = SUB82(pcVar3,0);
      uStack_28 = (undefined6)((ulong)pcVar3 >> 0x10);
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",local_38,0x16);
    }
  }
  else {
    if (param_3 != 0) {
      local_38[2] = (int)param_3;
      uStack_2c = (undefined2)((ulong)param_3 >> 0x20);
      uStack_2a = (undefined2)((ulong)param_3 >> 0x30);
      local_38[0] = param_2;
      FUN_1003a8af6(param_1,local_38,local_38);
      goto LAB_1003a6c08;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      pcVar3 = "inValue != nullptr";
      goto LAB_1003a6c43;
    }
  }
  FUN_1001782e9(0,0);
LAB_1003a6c08:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

