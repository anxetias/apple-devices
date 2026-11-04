// name: FUN_1005bebc8
// address: 1005bebc8

/* WARNING: Type propagation algorithm not settling */

int FUN_1005bebc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 local_68 [12];
  int local_5c [3];
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined2 uStack_4c;
  int iStack_4a;
  undefined2 local_46;
  undefined8 local_44;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = FUN_1005b7cbc();
  local_5c[0] = iVar2;
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      lVar3 = _AMDeviceCreateActivationInfoWithOptions(param_1,param_2,param_3,local_5c);
      *param_4 = lVar3;
      if (lVar3 == 0) {
        cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
        iVar2 = local_5c[0];
        if (cVar1 != '\0') {
          uVar4 = _AMDeviceCopyDeviceIdentifier(param_1);
          FUN_1001aaedc(local_68,uVar4);
          local_5c[1] = 0x4000302;
          local_5c[2] = iVar2;
          uStack_50 = 0x842;
          uStack_4e = (undefined2)local_68._0_8_;
          uStack_4c = SUB82(local_68._0_8_,2);
          iStack_4a = SUB84(local_68._0_8_,4);
          local_46 = 0x800;
          local_44 = param_1;
          __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                              "AMDeviceCreateActivationInfoWithOptions failed (0x%08X) for device %{public}@ (%p)"
                              ,local_5c + 1,0x1c);
          FUN_1001ab006(local_68);
        }
      }
      FUN_1005b8595(param_1);
      iVar2 = local_5c[0];
    }
    else {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_5c[1] = 0x8220202;
        local_5c[2] = 0x7a0a90;
        uStack_50 = 1;
        uStack_4e = 0;
        uStack_4c = 0x400;
        iStack_4a = iVar2;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",local_5c + 1,0x12);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

