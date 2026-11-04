// name: FUN_1002b630e
// address: 1002b630e

undefined1 FUN_1002b630e(long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((param_1 == 0) || (*(long *)(param_1 + 8) == 0)) ||
     (*(long *)(*(long *)(param_1 + 8) + 0x10) == 0)) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_2a = "TrackInstanceIsValid(trackInstance)";
LAB_1002b6400:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
LAB_1002b63b3:
    uVar5 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    if (*(int *)(param_1 + 0x3c) == 0x53485244) {
      lVar3 = FUN_1002af980(param_1);
      if (2 < lVar3 + 2U) {
        iVar2 = FUN_1002aff0b(param_1);
        if (iVar2 - 2U < 3) {
          if ((*(long *)(param_1 + 8) == 0) ||
             (lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar3 == 0)) {
            uVar4 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar4,0x10);
            if (cVar1 != '\0') {
              local_2a = "trackData";
              goto LAB_1002b6400;
            }
            goto LAB_1002b63b3;
          }
          if ((*(byte *)(lVar3 + 0x1bb0) & 1) != 0) {
            cVar1 = FUN_1003211b5();
            uVar5 = 1;
            if (cVar1 != '\0') goto LAB_1002b63be;
          }
        }
      }
    }
    uVar5 = 0;
  }
LAB_1002b63be:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

