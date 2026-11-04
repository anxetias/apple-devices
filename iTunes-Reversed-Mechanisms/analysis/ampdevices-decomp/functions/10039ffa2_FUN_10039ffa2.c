// name: FUN_10039ffa2
// address: 10039ffa2

void FUN_10039ffa2(long param_1)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar1 = *(uint *)(DAT_1008c76a0 + 0x1a54);
  if (uVar1 < *(uint *)(param_1 + 0x1c)) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "mRevision <= revision";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  *(uint *)(param_1 + 0x1c) = uVar1;
  lVar4 = *(long *)(param_1 + 0x48);
  if (uVar1 < *(uint *)(lVar4 + 0x2ca8)) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "mTrackDataPrivate->revision <= revision";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    lVar4 = *(long *)(param_1 + 0x48);
  }
  *(uint *)(lVar4 + 0x2ca8) = uVar1;
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

