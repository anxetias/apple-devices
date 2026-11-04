// name: FUN_10052f02c
// address: 10052f02c

undefined8 FUN_10052f02c(long param_1,ulong param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long local_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((*(long *)(param_1 + 0x518) != 0) &&
     (lVar5 = param_2 - *(ulong *)(param_1 + 0x548),
     *(ulong *)(param_1 + 0x548) <= param_2 && lVar5 != 0)) {
    lVar3 = FUN_1001c63e1(lVar5);
    local_50 = lVar5;
    if (lVar3 == 0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "precedingBytes != __null";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else {
      iVar2 = FUN_1001d6a08(*(undefined8 *)(param_1 + 0x550),&local_50,lVar3,0);
      if (iVar2 == 0) {
        FUN_10017983e(*(undefined8 *)(param_1 + 0x518),lVar3,local_50);
        *(long *)(param_1 + 0x548) = *(long *)(param_1 + 0x548) + local_50;
      }
      FUN_1001c64c1(lVar3);
    }
  }
  if (*(long *)(param_1 + 0x550) == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "mStream != __null";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    uVar4 = 0xffffffce;
  }
  else {
    uVar4 = FUN_1001d7378(*(long *)(param_1 + 0x550),param_2);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

