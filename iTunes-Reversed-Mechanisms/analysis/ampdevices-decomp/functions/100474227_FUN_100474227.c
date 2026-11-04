// name: FUN_100474227
// address: 100474227

uint FUN_100474227(long param_1)

{
  int iVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == 0) || (*(long *)(param_1 + 0x10) == 0)) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "TrackInfoIsValid(inTrackInfo)";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    uVar5 = 0;
  }
  else {
    iVar1 = *(int *)(*(long *)(param_1 + 0x10) + 0x84);
    if (iVar1 == 0x72767273) {
      lVar3 = FUN_100597637(param_1,0);
      if (lVar3 == 0) {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          local_38 = 0x8220202;
          local_34 = "Assertion failure (expected to be not NULL)";
          local_2c = 0x822;
          local_2a = "GetRemoteTrackInstance(inTrackInfo)";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
        }
        cVar2 = FUN_1001782e9(0,0);
        uVar5 = 0;
        if (cVar2 == '\0') goto LAB_10047429b;
      }
      uVar5 = 1;
    }
    else {
      uVar5 = 0;
      if (iVar1 == 0x2062696c) {
        uVar5 = 0;
        if ((*(uint *)(param_1 + 0x98) & 0xfffffffe) == 2) {
          uVar5 = *(uint *)(param_1 + 0x98);
        }
      }
    }
  }
LAB_10047429b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}

