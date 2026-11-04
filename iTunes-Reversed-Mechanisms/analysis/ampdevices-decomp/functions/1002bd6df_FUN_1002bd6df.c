// name: FUN_1002bd6df
// address: 1002bd6df

void FUN_1002bd6df(long param_1)

{
  undefined *puVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  puVar1 = PTR_cf_file_hash_1008536a8;
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((param_1 == 0) || (*(long *)(param_1 + 8) == 0)) ||
     (*(long *)(*(long *)(param_1 + 8) + 0x10) == 0)) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "TrackInstanceIsValid(trackInstance)";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x98);
    if (lVar3 != 0) {
      lVar3 = FUN_100171475(lVar3,PTR_cf_file_hash_1008536a8);
      if (lVar3 != 0) {
        FUN_100171552(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x98),puVar1);
        if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
          FUN_1002fef76(*(undefined8 *)(param_1 + 8));
          return;
        }
        goto LAB_1002bd7f2;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
LAB_1002bd7f2:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

