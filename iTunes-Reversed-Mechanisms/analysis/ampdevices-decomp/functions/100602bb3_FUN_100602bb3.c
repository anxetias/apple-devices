// name: FUN_100602bb3
// address: 100602bb3

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_100602bb3(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_100602c5c:
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "TrackDataIsValid(trackData)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
  }
  else {
    if (*(int *)(param_1 + 0x80) != 0x74646174) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure (expected to be true)";
        local_2c = 0x822;
        local_2a = "trackData->magic == \'tdat\'";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_100602c5c;
    }
    cVar1 = FUN_100402ecf(param_1);
    if (cVar1 != '\0') {
      FUN_100602998(param_1);
      if (*(long *)(param_1 + 0x2c60) != 0) {
        FUN_100528e75();
      }
      while ((*(byte *)(param_1 + 0x2be0) & 0x20) != 0) {
        FUN_1001b0d8d(_DAT_100748168);
      }
      iVar2 = *(int *)(param_1 + 0x2c58);
      if (iVar2 != 0) goto LAB_100602c83;
    }
    iVar2 = 0;
  }
LAB_100602c83:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

