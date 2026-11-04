// name: FUN_1005bf9b3
// address: 1005bf9b3

int FUN_1005bf9b3(ulong param_1,undefined1 *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (undefined1 *)0x0) {
    iVar2 = FUN_1005b7cbc(param_1);
    if (iVar2 != 0) goto LAB_1005bf9fa;
  }
  else {
    *param_2 = 0;
    iVar2 = FUN_1005b7cbc(param_1);
    if (iVar2 != 0) {
LAB_1005bf9fa:
      if (iVar2 != -0x80) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x400;
          local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x12);
        }
      }
      _AMRLog(3,&cf_AMDeviceConnectAndStartSessionfailed_0x_08X_,iVar2);
      goto LAB_1005bfaf6;
    }
    *param_2 = 1;
  }
  iVar2 = _AMDeviceEnterRecovery(param_1);
  if (iVar2 == -0x80) {
LAB_1005bfa68:
    _AMRLog(3,&cf_AMDeviceEnterRecoveryfailed_0x_08X_,iVar2);
  }
  else if (iVar2 != 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x400;
      local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x12);
    }
    goto LAB_1005bfa68;
  }
  FUN_1001e9de0(&DAT_1008c2fc8);
  if (DAT_1008c2fb0 == (undefined8 *)0x0) {
LAB_1005bfac4:
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "sessionIterator != sMobileDeviceSessions.end()";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    puVar5 = &DAT_1008c2fb0;
    puVar4 = DAT_1008c2fb0;
    do {
      if ((ulong)puVar4[4] >= param_1) {
        puVar5 = puVar4;
      }
      puVar4 = (undefined8 *)puVar4[(ulong)puVar4[4] < param_1];
    } while (puVar4 != (undefined8 *)0x0);
    if (((undefined8 **)puVar5 == &DAT_1008c2fb0) || (param_1 < (ulong)puVar5[4]))
    goto LAB_1005bfac4;
    FUN_1005c8650(puVar5);
    operator_delete(puVar5);
    FUN_10017060f(param_1);
    FUN_1005c68f3(param_1);
  }
  FUN_1001e9eb9(&DAT_1008c2fc8);
LAB_1005bfaf6:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

