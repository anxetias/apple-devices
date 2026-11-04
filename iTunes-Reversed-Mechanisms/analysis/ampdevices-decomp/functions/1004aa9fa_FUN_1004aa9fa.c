// name: FUN_1004aa9fa
// address: 1004aa9fa

long FUN_1004aa9fa(long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  int *piVar5;
  long lVar6;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  piVar5 = DAT_1008c7798;
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = *(int *)(param_1 + 0x424);
  if (iVar2 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "location->downloadItemID != 0";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    lVar6 = 0;
    goto LAB_1004aaadc;
  }
  if ((DAT_1008c7790 == '\0') && (DAT_1008c7798 != (int *)0x0)) {
    LOCK();
    *DAT_1008c7798 = *DAT_1008c7798 + 1;
    UNLOCK();
    iVar2 = *(int *)(param_1 + 0x424);
  }
  else {
    piVar5 = (int *)0x0;
  }
  lVar3 = FUN_1004ab0f6(param_1,iVar2);
  if (lVar3 == 0) {
LAB_1004aaa8c:
    lVar6 = 0;
    if (*(char *)(param_1 + 0x42c) != '\0') {
      lVar6 = param_1;
    }
  }
  else {
    iVar2 = FUN_1004ab1cc(lVar3,param_1);
    if (iVar2 == 0) goto LAB_1004aaa8c;
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x400;
      local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x12);
    }
    lVar6 = 0;
  }
  FUN_1004aa496(lVar3);
  if (piVar5 != (int *)0x0) {
    LOCK();
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (*piVar5 == 0) {
      FUN_1004ada4f(piVar5);
    }
  }
LAB_1004aaadc:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

