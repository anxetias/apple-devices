// name: FUN_100210dd0
// address: 100210dd0

void FUN_100210dd0(long param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 local_c48 [3072];
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "pvData != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_100210ec8;
  }
  if (*(int *)(param_1 + 0x2ad4) == 0xe) {
    iVar3 = FUN_1001823de(param_1 + 0x23f8,local_c48,0xbfe);
    if (iVar3 == -0x80) goto LAB_100210eab;
    if (iVar3 != 0) {
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x400;
        local_3a = (char *)CONCAT44(local_3a._4_4_,iVar3);
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_48,0x12);
      }
      goto LAB_100210eab;
    }
    iVar4 = -4;
    bVar1 = true;
  }
  else {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "thisController->mState == kUpdating";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    iVar3 = -0x32;
LAB_100210eab:
    bVar1 = false;
    iVar4 = 0;
  }
  if (iVar3 != 0) {
    iVar4 = iVar3;
  }
  if (!bVar1) {
    iVar4 = iVar3;
  }
  *(int *)(param_1 + 0x2acc) = iVar4;
  *(undefined1 *)(param_1 + 0x28a0) = 0;
LAB_100210ec8:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

