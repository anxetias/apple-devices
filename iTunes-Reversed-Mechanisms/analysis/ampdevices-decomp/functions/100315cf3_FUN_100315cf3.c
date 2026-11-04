// name: FUN_100315cf3
// address: 100315cf3

void FUN_100315cf3(long param_1)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_100315e01:
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_2a = "TrackDataIsValid(trackData)";
LAB_100315e64:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
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
      if (cVar1 == '\0') goto LAB_100315e01;
    }
    FUN_1002fc1ae(param_1,0x7464616f,0);
    while (uVar2 = *(uint *)(param_1 + 0x2be0), (uVar2 & 0x20) != 0) {
      *(uint *)(param_1 + 0x2be0) = uVar2 | 0x40;
      FUN_1001b153d();
    }
    while ((uVar2 >> 8 & 1) != 0) {
      *(uint *)(param_1 + 0x2be0) = uVar2 | 0x200;
      FUN_1001b153d();
      uVar2 = *(uint *)(param_1 + 0x2be0);
    }
    while ((uVar2 >> 0xc & 1) != 0) {
      *(uint *)(param_1 + 0x2be0) = uVar2 | 0x4000;
      FUN_1001b153d();
      uVar2 = *(uint *)(param_1 + 0x2be0);
    }
    if (*(short *)(param_1 + 0x27b0) == 0) goto LAB_100315e23;
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_2a = "trackData->fiberCount == 0";
      goto LAB_100315e64;
    }
  }
  FUN_1001782e9(0,0);
LAB_100315e23:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

