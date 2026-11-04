// name: FUN_1005e39b4
// address: 1005e39b4

void FUN_1005e39b4(undefined8 param_1,long param_2,long param_3)

{
  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
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
LAB_1005e3a89:
      uStack_2c = 0x822;
      local_30 = 1;
      uStack_34 = 0x7a0a90;
      local_38 = 0x8220202;
      uStack_2a = SUB82(pcVar3,0);
      uStack_28 = (undefined6)((ulong)pcVar3 >> 0x10);
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
  }
  else {
    if (param_3 != 0) {
      local_38 = (undefined4)param_2;
      uStack_34 = (undefined4)((ulong)param_2 >> 0x20);
      local_30 = (undefined4)param_3;
      uStack_2c = (undefined2)((ulong)param_3 >> 0x20);
      uStack_2a = (undefined2)((ulong)param_3 >> 0x30);
      FUN_1005e6998(param_1,&local_38,&local_38);
      goto LAB_1005e3a4e;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      pcVar3 = "inValue != nullptr";
      goto LAB_1005e3a89;
    }
  }
  FUN_1001782e9(0,0);
LAB_1005e3a4e:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

