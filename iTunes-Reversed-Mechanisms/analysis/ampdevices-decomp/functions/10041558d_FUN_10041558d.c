// name: FUN_10041558d
// address: 10041558d

/* WARNING: Type propagation algorithm not settling */

int FUN_10041558d(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  bool bVar5;
  void *local_880;
  char local_878;
  void *local_870;
  char local_868;
  int local_85c [2];
  char *local_854;
  undefined2 local_84c;
  int local_84a;
  undefined1 local_838 [2048];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_1 = 0;
  iVar2 = DAT_1008be660;
  if (DAT_1008be660 == 0) {
    iVar2 = *param_1;
  }
  else {
    *param_1 = DAT_1008be660;
  }
  iVar3 = 0;
  if (iVar2 == 0) {
    FUN_10032f11e(&local_870);
    FUN_10032f11e(&local_880);
    local_838[0] = 0;
    iVar3 = FUN_10009abb0(local_870,local_880,local_838,local_85c);
    if ((iVar3 != -0x80) && (iVar3 != 0)) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_85c[1] = 0x8220202;
        local_854 = "Assertion failure";
        local_84c = 0x400;
        local_84a = iVar3;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",local_85c + 1,0x12);
      }
      if (iVar3 == -0xa4a9) {
        FUN_1000ae640(local_85c[0]);
      }
    }
    if ((local_880 != (void *)0x0) && (local_878 != '\0')) {
      operator_delete(local_880);
    }
    if ((local_870 != (void *)0x0) && (local_868 != '\0')) {
      operator_delete(local_870);
    }
    if (iVar3 == 0) {
      LOCK();
      bVar5 = DAT_1008be660 == 0;
      if (bVar5) {
        DAT_1008be660 = local_85c[0];
      }
      UNLOCK();
      if (!bVar5) {
        FUN_1000ae640();
        local_85c[0] = DAT_1008be660;
      }
      *param_1 = local_85c[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

