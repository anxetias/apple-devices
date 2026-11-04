// name: FUN_10030d69f
// address: 10030d69f

int FUN_10030d69f(long param_1,undefined8 param_2,undefined4 param_3)

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
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((param_1 == 0) || (*(long *)(param_1 + 8) == 0)) ||
     (*(long *)(*(long *)(param_1 + 8) + 0x10) == 0)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_7a = "TrackInstanceIsValid(trackInstance)";
LAB_10030d7e1:
      local_7c = 0x822;
      local_84 = "Assertion failure";
      local_88 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_88,0x16);
    }
  }
  else {
    if (*(int *)(param_1 + 0x3c) == 0x46494c45) {
      iVar2 = FUN_10017d477(param_2,&local_88,0);
      if (iVar2 != -0x80) {
        if (iVar2 == 0) {
          FUN_1002b4657(param_1,param_2,&local_88);
          iVar2 = 0;
          FUN_10030ceed(param_1,&local_88,param_3,0);
          *(undefined1 *)(param_1 + 0x44) = 1;
        }
        else {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            local_a8 = 0x8220202;
            local_a4 = "Assertion failure";
            local_9c = 0x400;
            local_9a = iVar2;
            __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_a8,0x12);
          }
        }
      }
      goto LAB_10030d759;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_7a = "trackInstance->trackKind == kITFileKind";
      goto LAB_10030d7e1;
    }
  }
  FUN_1001782e9(0,0);
  iVar2 = -0x32;
LAB_10030d759:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

