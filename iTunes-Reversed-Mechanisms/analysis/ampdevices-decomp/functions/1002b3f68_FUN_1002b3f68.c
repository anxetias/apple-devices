// name: FUN_1002b3f68
// address: 1002b3f68

undefined8 FUN_1002b3f68(long param_1,undefined8 *param_2,undefined4 *param_3)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((param_1 == 0) || (*(long *)(param_1 + 8) == 0)) ||
     (*(long *)(*(long *)(param_1 + 8) + 0x10) == 0)) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "TrackInstanceIsValid(trackInstance)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    uVar3 = 0xffffffce;
    goto LAB_1002b3ff5;
  }
  iVar1 = *(int *)(param_1 + 0x3c);
  if ((iVar1 == 0x53485244) || (iVar1 == 0x48545450)) {
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = *(undefined8 *)(param_1 + 0x88);
    }
    uVar3 = 0;
    if (param_3 == (undefined4 *)0x0) goto LAB_1002b3ff5;
    uVar4 = *(undefined4 *)(param_1 + 0x90);
  }
  else {
    if (iVar1 != 0x46494c45) {
      if (param_2 != (undefined8 *)0x0) {
        *param_2 = 0;
      }
      uVar3 = 0xffffffce;
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = 0;
      }
      goto LAB_1002b3ff5;
    }
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = *(undefined8 *)(param_1 + 0x98);
    }
    uVar3 = 0;
    if (param_3 == (undefined4 *)0x0) goto LAB_1002b3ff5;
    uVar4 = *(undefined4 *)(param_1 + 0xa0);
  }
  uVar3 = 0;
  *param_3 = uVar4;
LAB_1002b3ff5:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

