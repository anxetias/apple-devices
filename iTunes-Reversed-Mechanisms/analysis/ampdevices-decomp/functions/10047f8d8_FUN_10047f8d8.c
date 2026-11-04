// name: FUN_10047f8d8
// address: 10047f8d8

undefined1 FUN_10047f8d8(long param_1,uint param_2,undefined8 param_3)

{
  byte *pbVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == 0) || (*(long *)(param_1 + 0x10) == 0)) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "TrackInfoIsValid(trackInfo)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    uVar4 = 0;
    FUN_1001782e9(0,0);
  }
  else if ((*(uint *)(param_1 + 0xc2) >> 0x1d & 1) == (param_2 & 0xff)) {
    uVar4 = 0;
  }
  else {
    FUN_1005389ba(param_3,0x5f);
    *(uint *)(param_1 + 0xc2) = *(uint *)(param_1 + 0xc2) & 0xdfffffff | (param_2 & 1) << 0x1d;
    uVar4 = 1;
    if ((char)param_2 == '\x01') {
      if (*(long *)(param_1 + 0x28) != 0) {
        pbVar1 = (byte *)(*(long *)(param_1 + 0x28) + 0xf9);
        *pbVar1 = *pbVar1 & 0xef;
      }
    }
    else if ((param_2 & 0xff) == 0) {
      if (*(int *)(param_1 + 0x144) != 0) {
        *(undefined8 *)(param_1 + 0x144) = 0;
        *(undefined4 *)(param_1 + 0x19c) = 0;
        FUN_1005389ba(param_3,0x16);
      }
      cVar2 = FUN_10047f358(param_1);
      if (cVar2 != '\0') {
        cVar2 = FUN_10047f4fd(param_1,0);
        if (cVar2 != '\0') {
          FUN_1005389ba(param_3,0x5d);
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

