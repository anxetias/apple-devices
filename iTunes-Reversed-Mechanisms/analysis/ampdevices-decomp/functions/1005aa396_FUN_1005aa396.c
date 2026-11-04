// name: FUN_1005aa396
// address: 1005aa396

ulong FUN_1005aa396(long param_1,undefined8 param_2)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar2 = FUN_10017cbd0(param_2);
  if (cVar2 == '\0') {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "JRFileSpecIsValid(fileSpec)";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    uVar5 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    if (*(int *)(param_1 + 0x15bc) == 0) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure";
        local_2c = 0x822;
        local_2a = "mEstimatedTrackNameSize != 0";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
      FUN_1001782e9(0,0);
    }
    if (*(int *)(param_1 + 0x15c4) == 0) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure";
        local_2c = 0x822;
        local_2a = "mEstimatedOtherNameSize != 0";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
      FUN_1001782e9(0,0);
    }
    uVar3 = *(uint *)(param_1 + 0x15b8) & *(uint *)(param_1 + 0x15b4);
    if ((uVar3 & 2) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = (ulong)*(uint *)(param_1 + 0x15bc);
    }
    if ((uVar3 & 4) != 0) {
      uVar5 = uVar5 + *(uint *)(param_1 + 0x15c0);
    }
    if ((uVar3 & 0x10) != 0) {
      bVar1 = *(byte *)(param_1 + 0x1578);
      if ((bVar1 & 4) != 0) {
        uVar5 = uVar5 + *(uint *)(param_1 + 0x15c4);
      }
      if ((bVar1 & 1) != 0) {
        uVar5 = uVar5 + *(uint *)(param_1 + 0x15c4);
      }
      if ((bVar1 & 2) != 0) {
        uVar5 = uVar5 + *(uint *)(param_1 + 0x15c4);
      }
      if ((bVar1 & 0x10) != 0) {
        uVar5 = uVar5 + *(uint *)(param_1 + 0x15c4);
      }
      if ((bVar1 & 0x20) != 0) {
        uVar5 = uVar5 + *(uint *)(param_1 + 0x15c4);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

