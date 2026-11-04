// name: FUN_1002b4657
// address: 1002b4657

int FUN_1002b4657(long param_1,long param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_a8;
  char *local_a4;
  undefined2 local_9c;
  int local_9a;
  undefined4 local_88;
  char *local_84;
  undefined2 local_7c;
  char *local_7a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((param_1 == 0) || (*(long *)(param_1 + 8) == 0)) ||
     (*(long *)(*(long *)(param_1 + 8) + 0x10) == 0)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_7a = "TrackInstanceIsValid( inTrackInstance )";
LAB_1002b4800:
      local_7c = 0x822;
      local_84 = "Assertion failure";
      local_88 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_88,0x16);
    }
  }
  else {
    if (param_2 != 0) {
      if (param_3 == (undefined4 *)0x0) {
        param_3 = &local_88;
        iVar2 = FUN_10017d477(param_2,param_3,0);
        if (iVar2 == -0x80) goto LAB_1002b46ed;
        if (iVar2 != 0) {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            local_a8 = 0x8220202;
            local_a4 = "Assertion failure";
            local_9c = 0x400;
            local_9a = iVar2;
            __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_a8,0x12);
          }
          goto LAB_1002b46ed;
        }
      }
      FUN_1002ae6f7(param_1);
      FUN_10053672c(param_2,param_3,*(undefined8 *)(param_1 + 0x80));
      iVar2 = 0;
      goto LAB_1002b46ed;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_7a = "inFileSpec != __null";
      goto LAB_1002b4800;
    }
  }
  FUN_1001782e9(0,0);
  iVar2 = -0x32;
LAB_1002b46ed:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

