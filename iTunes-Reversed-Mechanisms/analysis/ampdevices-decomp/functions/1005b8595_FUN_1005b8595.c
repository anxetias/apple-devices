// name: FUN_1005b8595
// address: 1005b8595

undefined8 FUN_1005b8595(ulong param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "device != __null";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    uVar6 = 0xffffffce;
    goto LAB_1005b867b;
  }
  uVar6 = 0xe800000b;
  if (DAT_1008c3011 != '\0') goto LAB_1005b867b;
  FUN_1001e9de0(&DAT_1008c2fc8);
  if (DAT_1008c2fb0 == (undefined8 *)0x0) {
LAB_1005b8617:
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    uVar6 = 0xe800000b;
    if (cVar1 != '\0') {
      local_2a = "sessionIterator != sMobileDeviceSessions.end()";
LAB_1005b87f5:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
LAB_1005b8639:
    FUN_1001782e9(0,0);
  }
  else {
    puVar2 = &DAT_1008c2fb0;
    puVar5 = DAT_1008c2fb0;
    do {
      if ((ulong)puVar5[4] >= param_1) {
        puVar2 = puVar5;
      }
      puVar5 = (undefined8 *)puVar5[(ulong)puVar5[4] < param_1];
    } while (puVar5 != (undefined8 *)0x0);
    if (((undefined8 **)puVar2 == &DAT_1008c2fb0) || (param_1 < (ulong)puVar2[4]))
    goto LAB_1005b8617;
    if (*(int *)(puVar2 + 5) == 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      uVar6 = 0xe800000b;
      if (cVar1 != '\0') {
        local_2a = "sessionIterator->second.refCount != 0";
        goto LAB_1005b87f5;
      }
      goto LAB_1005b8639;
    }
    uVar6 = 0;
    iVar4 = *(int *)(puVar2 + 5) + -1;
    *(int *)(puVar2 + 5) = iVar4;
    if (iVar4 == 0) {
      FUN_1001eed65(&DAT_1008c3018);
      uVar6 = 0;
      FUN_1001ee941(DAT_100700b00,0,0,DAT_1008c6710,FUN_1005b8824,0,&DAT_1008c3018);
      if (DAT_1008c3018 == 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        uVar6 = 0;
        if (cVar1 != '\0') {
          local_2a = "sMobileDeviceStopSessionAndDisconnectTimer != kInvalidEventLoopTimerID";
          goto LAB_1005b87f5;
        }
        goto LAB_1005b8639;
      }
    }
  }
  FUN_1001e9eb9(&DAT_1008c2fc8);
LAB_1005b867b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

