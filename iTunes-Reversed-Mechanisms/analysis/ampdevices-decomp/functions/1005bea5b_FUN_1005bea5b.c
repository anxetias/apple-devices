// name: FUN_1005bea5b
// address: 1005bea5b

/* WARNING: Type propagation algorithm not settling */

int FUN_1005bea5b(undefined8 param_1,long *param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 local_58 [12];
  int local_4c [3];
  undefined2 uStack_40;
  undefined2 uStack_3e;
  undefined2 uStack_3c;
  int iStack_3a;
  undefined2 local_36;
  undefined8 local_34;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = FUN_1005b7cbc();
  local_4c[0] = iVar2;
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      lVar3 = _AMDeviceCreateActivationSessionInfo(param_1,local_4c);
      *param_2 = lVar3;
      if (lVar3 == 0) {
        cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
        iVar2 = local_4c[0];
        if (cVar1 != '\0') {
          uVar4 = _AMDeviceCopyDeviceIdentifier(param_1);
          FUN_1001aaedc(local_58,uVar4);
          local_4c[1] = 0x4000302;
          local_4c[2] = iVar2;
          uStack_40 = 0x842;
          uStack_3e = (undefined2)local_58._0_8_;
          uStack_3c = SUB82(local_58._0_8_,2);
          iStack_3a = SUB84(local_58._0_8_,4);
          local_36 = 0x800;
          local_34 = param_1;
          __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                              "AMDeviceCreateActivationSessionInfo failed (0x%08X) for device %{public}@ (%p)"
                              ,local_4c + 1,0x1c);
          FUN_1001ab006(local_58);
        }
      }
      FUN_1005b8595(param_1);
      iVar2 = local_4c[0];
    }
    else {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_4c[1] = 0x8220202;
        local_4c[2] = 0x7a0a90;
        uStack_40 = 1;
        uStack_3e = 0;
        uStack_3c = 0x400;
        iStack_3a = iVar2;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",local_4c + 1,0x12);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

