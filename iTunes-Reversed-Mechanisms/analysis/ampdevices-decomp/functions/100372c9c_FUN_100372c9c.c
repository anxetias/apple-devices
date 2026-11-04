// name: FUN_100372c9c
// address: 100372c9c

int FUN_100372c9c(undefined8 param_1,int *param_2,undefined8 param_3,void *param_4)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  int local_67c;
  undefined4 local_678;
  int local_674;
  undefined2 uStack_670;
  undefined2 uStack_66e;
  undefined2 uStack_66c;
  int iStack_66a;
  undefined2 uStack_666;
  undefined2 uStack_664;
  undefined6 uStack_662;
  undefined4 local_658;
  char *local_654;
  undefined2 local_64c;
  char *local_64a;
  undefined1 local_238 [512];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_10017cbd0(param_2);
  if ((cVar1 == '\0') || (*param_2 != 0x41464350)) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_658 = 0x8220202;
      local_654 = "Assertion failure";
      local_64c = 0x822;
      local_64a = "JRFileSpecIsAFCPath(newParentSpec)";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_658,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
    goto LAB_100372d70;
  }
  lVar3 = FUN_10036d859(param_1);
  if (lVar3 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_658 = 0x8220202;
      local_654 = "Assertion failure";
      local_64c = 0x822;
      local_64a = "afcVolumeInfo != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_658,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x23;
    goto LAB_100372d70;
  }
  iVar2 = FUN_1003714b1(param_1,local_238);
  if (iVar2 != 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_658 = 0x8220202;
      local_654 = "Assertion failure";
      local_64c = 0x400;
      local_64a = (char *)CONCAT44(local_64a._4_4_,iVar2);
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_658,0x12);
    }
    uVar4 = 0;
    lVar7 = 0;
    lVar6 = 0;
    lVar5 = 0;
    local_67c = 0;
    goto LAB_100372f6c;
  }
  local_67c = FUN_100377aa5(param_2,local_238,0,0,0,&local_658);
  if (local_67c == -0x80) {
LAB_100372f63:
    uVar4 = 0;
    lVar7 = 0;
    lVar6 = 0;
    lVar5 = 0;
  }
  else {
    if (local_67c != 0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_678 = 0x8220202;
        local_674 = 0x7a0a90;
        uStack_670 = 1;
        uStack_66e = 0;
        uStack_66c = 0x400;
        iStack_66a = local_67c;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_678,0x12);
      }
      goto LAB_100372f63;
    }
    lVar5 = FUN_10036d2f1(lVar3,0);
    if (lVar5 == 0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_678 = 0x8220202;
        local_674 = 0x7a0a90;
        uStack_670 = 1;
        uStack_66e = 0;
        uStack_66c = 0x822;
        iStack_66a = 0x7c5917;
        uStack_666 = 1;
        uStack_664 = 0;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_678,0x16);
      }
      FUN_1001782e9(0,0);
      local_67c = -0x17ffbfe9;
      goto LAB_100372f63;
    }
    lVar6 = FUN_10036e72b(param_1);
    if (lVar6 == 0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_678 = 0x8220202;
        local_674 = 0x7a0a90;
        uStack_670 = 1;
        uStack_66e = 0;
        uStack_66c = 0x822;
        iStack_66a = 0x7c61bb;
        uStack_666 = 1;
        uStack_664 = 0;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_678,0x16);
      }
      uVar4 = 0;
      FUN_1001782e9(0,0);
      local_67c = -0x17ffbffd;
      lVar7 = 0;
      lVar6 = 0;
    }
    else {
      lVar7 = FUN_10036e72b(&local_658);
      if (lVar7 == 0) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_678 = 0x8220202;
          local_674 = 0x7a0a90;
          uStack_670 = 1;
          uStack_66e = 0;
          uStack_66c = 0x822;
          iStack_66a = 0x7c61d1;
          uStack_666 = 1;
          uStack_664 = 0;
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_678,0x16);
        }
        uVar4 = 0;
        FUN_1001782e9(0,0);
        local_67c = -0x17ffbffd;
        lVar7 = 0;
      }
      else {
        uVar4 = _AFCOperationCreateRenamePath(DAT_1008c4d90,lVar6,lVar7,0);
        local_67c = FUN_10036ed41(lVar5,uVar4);
        if (local_67c != -0x80) {
          if (local_67c == 0) {
            local_67c = 0;
            if (param_4 != (void *)0x0) {
              _memcpy(param_4,&local_658,0x420);
            }
            goto LAB_100372f6c;
          }
          uVar8 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar8,0x10);
          if (cVar1 != '\0') {
            local_678 = 0x8220202;
            local_674 = 0x7a0a90;
            uStack_670 = 1;
            uStack_66e = 0;
            uStack_66c = 0x400;
            iStack_66a = local_67c;
            __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_678,0x12);
          }
        }
        cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
        if (cVar1 != '\0') {
          local_678 = 0x4000302;
          uStack_670 = 0x842;
          uStack_66e = (undefined2)lVar6;
          uStack_66c = (undefined2)((ulong)lVar6 >> 0x10);
          iStack_66a = (int)((ulong)lVar6 >> 0x20);
          uStack_666 = 0x800;
          uStack_664 = (undefined2)lVar5;
          uStack_662 = (undefined6)((ulong)lVar5 >> 0x10);
          local_674 = local_67c;
          __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                              "AFC RenamePath failed (0x%08X) for \"%{public}@\" with connection %p"
                              ,&local_678,0x1c);
        }
      }
    }
  }
LAB_100372f6c:
  FUN_10017060f(uVar4);
  FUN_10017060f(lVar6);
  FUN_10017060f(lVar7);
  FUN_10017060f(lVar5);
  FUN_10036d4d2(lVar3);
  if (iVar2 == 0) {
    iVar2 = FUN_10036db97(local_67c);
  }
LAB_100372d70:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

