// name: FUN_10044ad85
// address: 10044ad85

undefined8 FUN_10044ad85(long param_1,ulong param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == 0) || (*(long *)(param_1 + 0x10) == 0)) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "TrackInfoIsValid(trackInfo)";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    uVar5 = 0;
    FUN_1001782e9(0,0);
    goto LAB_10044ae4b;
  }
  cVar1 = FUN_10044acc3(param_1);
  if (cVar1 != '\0') {
    if ((param_2 & 2) == 0) {
      uVar2 = FUN_1003186de(param_1);
      if (uVar2 == 0) goto LAB_10044ae48;
      uVar5 = 0;
      uVar3 = FUN_100177d5c(0);
      if (uVar3 < uVar2) goto LAB_10044ae4b;
    }
    else {
      uVar3 = FUN_100177d5c(0);
    }
    iVar4 = FUN_100318858(param_1);
    uVar2 = FUN_1003186de(param_1);
    if ((uVar2 <= uVar3) &&
       ((iVar4 == 0 || (3 < (byte)(*(char *)(*(long *)(param_1 + 0x58) + 0x45) - 6U))))) {
      uVar5 = 1;
      goto LAB_10044ae4b;
    }
  }
LAB_10044ae48:
  uVar5 = 0;
LAB_10044ae4b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}

