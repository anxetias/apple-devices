// name: FUN_1002653c7
// address: 1002653c7

void FUN_1002653c7(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  char *pcVar4;
  size_t sVar5;
  uint local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_100263428();
  if (cVar1 == '\0') {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "ITIPodRefIsValid(iPod)";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    FUN_10017060f(*(undefined8 *)(param_1 + 0x6d8));
    *(undefined8 *)(param_1 + 0x6d8) = 0;
    FUN_10017060f(*(undefined8 *)(param_1 + 0x6e0));
    *(undefined8 *)(param_1 + 0x6e0) = 0;
    if (*(char *)(param_1 + 0x3f) == '\0') {
      pcVar4 = (char *)FUN_1002d303e(param_1);
      uVar2 = DAT_1008c4d90;
      if (pcVar4 == (char *)0x0) {
        uVar2 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar2,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = "checkpointData != nullptr";
          __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar2 = DAT_1008c75b8;
        cVar1 = _os_log_type_enabled(DAT_1008c75b8,0x10);
        if (cVar1 != '\0') {
          local_48 = local_48 & 0xffff0000;
          __os_log_impl(0x100000000,uVar2,0x10,"Failed to get Checkpoint data",&local_48,2);
        }
        goto LAB_100265552;
      }
      sVar5 = _strlen(pcVar4);
      uVar2 = FUN_100165bd7(uVar2,pcVar4,sVar5);
      *(undefined8 *)(param_1 + 0x6d8) = uVar2;
    }
    else {
      uVar2 = FUN_10055ae0c(param_1);
      lVar3 = FUN_1005bb963(uVar2,*(char *)(param_1 + 0x41) == '\0');
      *(long *)(param_1 + 0x6d8) = lVar3;
      if (lVar3 == 0) {
        uVar2 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar2,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = "iPod->checkpointData != nullptr";
          __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar2 = DAT_1008c75b8;
        cVar1 = _os_log_type_enabled(DAT_1008c75b8,0x10);
        if (cVar1 != '\0') {
          local_48 = local_48 & 0xffff0000;
          __os_log_impl(0x100000000,uVar2,0x10,"Failed to get Checkpoint data from AMDeviceRef",
                        &local_48,2);
        }
      }
    }
    lVar3 = FUN_10059cbdf(*(undefined8 *)(param_1 + 0x6d8));
    if (lVar3 != 0) {
      FUN_10017060f(*(undefined8 *)(param_1 + 0x6d8));
      *(long *)(param_1 + 0x6d8) = lVar3;
    }
  }
LAB_100265552:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

