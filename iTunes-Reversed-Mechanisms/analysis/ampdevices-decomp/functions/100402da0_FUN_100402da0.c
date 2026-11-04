// name: FUN_100402da0
// address: 100402da0

uint FUN_100402da0(long param_1)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 local_d08;
  char *local_d04;
  undefined2 local_cfc;
  char *local_cfa;
  int local_ccc;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((param_1 == 0) || (*(long *)(param_1 + 8) == 0)) ||
     (lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar1 == 0)) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_d08 = 0x8220202;
      local_d04 = "Assertion failure";
      local_cfc = 0x822;
      local_cfa = "TrackInstanceIsValid(trackInstance)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_d08,0x16);
    }
    FUN_1001782e9(0,0);
    uVar5 = 0;
  }
  else {
    uVar4 = 0;
    uVar5 = uVar4;
    if (((byte)(*(char *)(param_1 + 0x45) - 3U) < 2) && (*(int *)(lVar1 + 0x2c28) != 0)) {
      uVar6 = 1;
      do {
        FUN_10015b1df(lVar1 + 0x2c20,uVar6,&local_d08);
        uVar5 = uVar6;
        if (local_ccc == *(int *)(param_1 + 0x30)) break;
        uVar6 = uVar6 + 1;
        uVar5 = uVar4;
      } while (uVar6 <= *(uint *)(lVar1 + 0x2c28));
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}

