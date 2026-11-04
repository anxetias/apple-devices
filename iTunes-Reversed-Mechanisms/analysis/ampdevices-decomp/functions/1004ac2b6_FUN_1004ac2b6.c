// name: FUN_1004ac2b6
// address: 1004ac2b6

void FUN_1004ac2b6(long param_1,uint param_2,int param_3,char param_4)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar3 = FUN_1004aa626();
  if (cVar3 == '\0') {
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "DownloadItem_IsValid(inItem)";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_1004ac673;
  }
  if (((param_3 == 0x1f42) || (param_3 == -0x80)) && (*(char *)(param_1 + 0x69) == '\0'))
  goto LAB_1004ac673;
  piVar1 = *(int **)(param_1 + 0x20);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  cVar3 = FUN_1004aa626(param_1);
  if ((cVar3 == '\0') || (*(char *)(param_1 + 0x778) == '\0')) {
    cVar3 = FUN_1004aa626(param_1);
    if ((cVar3 == '\0') || (*(char *)(param_1 + 0x778) != '\0')) {
      uVar6 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar6,0x10);
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "( DownloadItem_IsValid(inItem) && ((inItem)->isContainer == false) )";
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else if (((param_3 != 0x1f42) && (param_3 != -0x80)) || (*(char *)(param_1 + 0x69) != '\0')) {
      piVar1 = *(int **)(param_1 + 0x20);
      if (piVar1 != (int *)0x0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      if (*(uint *)(param_1 + 0x118) < 4) {
        if (*(int *)(param_1 + 0x170) == 0) {
          iVar4 = -0x80;
          if (param_3 != 0x1f42) {
            iVar4 = param_3;
          }
          *(int *)(param_1 + 0x170) = iVar4;
        }
        if (*(uint *)(param_1 + 0x118) == 1) {
          *(undefined4 *)(param_1 + 0x118) = 4;
        }
        if ((param_2 & 1) != 0) {
          *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) & 0x7ffffffe | 0x80000000;
        }
        uVar6 = FUN_1001ebd46();
        *(undefined8 *)(param_1 + 0x1c0) = uVar6;
      }
      else if ((param_2 & 1) != 0) {
        *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) & 0x7ffffffe | 0x80000000;
      }
      *(undefined1 *)(param_1 + 0x1b8) = 1;
      if (piVar1 != (int *)0x0) {
        LOCK();
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        bVar5 = iVar4 == 1;
        bVar2 = bVar5;
        goto joined_r0x0001004ac548;
      }
    }
LAB_1004ac62d:
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  else {
    cVar3 = FUN_1004aa626(param_1);
    if ((cVar3 == '\0') || (*(char *)(param_1 + 0x778) == '\0')) {
      uVar6 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar6,0x10);
      if (cVar3 != '\0') {
        local_4a = "( DownloadItem_IsValid(inItem) && (inItem)->isContainer )";
LAB_1004ac708:
        local_4c = 0x822;
        local_54 = "Assertion failure";
        local_58 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
LAB_1004ac475:
      FUN_1001782e9(0,0);
    }
    else if (((param_3 != 0x1f42) && (param_3 != -0x80)) || (*(char *)(param_1 + 0x69) != '\0')) {
      if (*(long *)(param_1 + 0x798) != 0) {
        FUN_1004ac2b6(*(long *)(param_1 + 0x798),param_2,param_3,param_4);
      }
      piVar1 = *(int **)(param_1 + 0x20);
      if (piVar1 == (int *)0x0) {
        uVar6 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar6,0x10);
        if (cVar3 != '\0') {
          local_4a = "downloadManager != __null";
          goto LAB_1004ac708;
        }
        goto LAB_1004ac475;
      }
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if (*(uint *)(param_1 + 0x118) < 4) {
        if (*(int *)(param_1 + 0x170) == 0) {
          *(int *)(param_1 + 0x170) = param_3;
        }
        if (*(uint *)(param_1 + 0x118) == 1) {
          *(undefined4 *)(param_1 + 0x118) = 4;
        }
        if ((param_2 & 1) != 0) {
          *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) & 0x7ffffffe | 0x80000000;
        }
        uVar6 = FUN_1001ebd46();
        *(undefined8 *)(param_1 + 0x1c0) = uVar6;
      }
      else if ((param_2 & 1) != 0) {
        *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) & 0x7ffffffe | 0x80000000;
      }
      *(undefined1 *)(param_1 + 0x1b8) = 1;
    }
    piVar1 = *(int **)(param_1 + 0x20);
    if (piVar1 == (int *)0x0) goto LAB_1004ac62d;
    LOCK();
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    bVar5 = iVar4 == 1;
    bVar2 = false;
joined_r0x0001004ac548:
    if (bVar5) {
      FUN_1004ada4f(piVar1);
      goto LAB_1004ac62d;
    }
    if (bVar2 || iVar4 < 1) goto LAB_1004ac62d;
  }
  if (param_4 == '\0') {
    *(undefined1 *)(param_1 + 0x1c8) = 1;
  }
  else {
    FUN_1004affd8(param_1);
  }
  piVar1 = *(int **)(param_1 + 0x20);
  if (piVar1 != (int *)0x0) {
    LOCK();
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      FUN_1004ada4f();
    }
    else if (1 < iVar4) goto LAB_1004ac673;
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
LAB_1004ac673:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

