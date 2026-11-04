// name: FUN_1005c5ee3
// address: 1005c5ee3

int FUN_1005c5ee3(long param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_440 [8];
  undefined4 local_438;
  int iStack_434;
  undefined2 local_430;
  undefined2 local_42e;
  undefined2 uStack_42c;
  undefined4 uStack_42a;
  undefined2 local_426;
  undefined2 local_424;
  undefined6 uStack_422;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_438 = 0x8220202;
      iStack_434 = 0x7a0a90;
      local_430 = 1;
      local_42e = 0;
      uStack_42c = 0x822;
      uStack_42a = 0x7eeb85;
      local_426 = 1;
      local_424 = 0;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_438,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = 0;
      cVar1 = FUN_1001ee068();
      if (cVar1 == '\0') {
        iVar2 = _AMDeviceCreateWakeupToken(param_1,param_2,param_3);
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
          if (cVar1 != '\0') {
            uVar3 = _AMDeviceCopyDeviceIdentifier(param_1);
            FUN_1001aaedc(local_440,uVar3);
            local_438 = 0x4000302;
            local_430 = 0x842;
            local_42e = local_440._0_2_;
            uStack_42c = local_440._2_2_;
            uStack_42a = local_440._4_4_;
            local_426 = 0x800;
            local_424 = (undefined2)param_1;
            uStack_422 = (undefined6)((ulong)param_1 >> 0x10);
            iStack_434 = iVar2;
            __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                                "AMDeviceCreateWakeupToken failed (0x%08X) for device %{public}@ (%p)"
                                ,&local_438,0x1c);
            FUN_1001ab006(local_440);
          }
        }
      }
      else {
        uVar3 = FUN_1001705fc(param_2);
        local_438 = (undefined4)uVar3;
        iStack_434 = (int)((ulong)uVar3 >> 0x20);
        iVar2 = FUN_1005c81f5(param_1,0,0xd,&local_438,param_3);
      }
      goto LAB_1005c5fa3;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_438 = 0x8220202;
      iStack_434 = 0x7a0a90;
      local_430 = 1;
      local_42e = 0;
      uStack_42c = 0x822;
      uStack_42a = 0x7ef6a5;
      local_426 = 1;
      local_424 = 0;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_438,0x16);
    }
    FUN_1001782e9(0,0);
  }
  iVar2 = -0x32;
LAB_1005c5fa3:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

