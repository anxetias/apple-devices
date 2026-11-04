// name: FUN_10037512c
// address: 10037512c

undefined8 FUN_10037512c(int *param_1,ulong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  undefined4 local_58;
  int local_54;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined2 uStack_4c;
  int iStack_4a;
  undefined2 uStack_46;
  undefined2 uStack_44;
  undefined6 uStack_42;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_10017cbd0();
  if ((cVar1 == '\0') || (*param_1 != 0x41464350)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = 0x7a0a90;
      uStack_50 = 1;
      uStack_4e = 0;
      uStack_4c = 0x822;
      iStack_4a = 0x7c58fd;
      uStack_46 = 1;
      uStack_44 = 0;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    uVar3 = 0xffffffce;
    goto LAB_1003751c3;
  }
  uVar3 = 0xfffffffc;
  if ((param_2 & 2) != 0) goto LAB_1003751c3;
  lVar4 = FUN_10036f8fa(param_1[6]);
  if (lVar4 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = 0x7a0a90;
      uStack_50 = 1;
      uStack_4e = 0;
      uStack_4c = 0x822;
      iStack_4a = 0x7c589d;
      uStack_46 = 1;
      uStack_44 = 0;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    uVar3 = 0xffffffdd;
    goto LAB_1003751c3;
  }
  iVar8 = -4;
  if (*(char *)(lVar4 + 0x6b9) == '\x02') {
LAB_1003752fc:
    lVar7 = 0;
    lVar6 = 0;
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_10036d2f1(lVar4,0);
    if (lVar5 == 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = 0x7a0a90;
        uStack_50 = 1;
        uStack_4e = 0;
        uStack_4c = 0x822;
        iStack_4a = 0x7c5917;
        uStack_46 = 1;
        uStack_44 = 0;
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      iVar8 = -0x17ffbfe9;
      goto LAB_1003752fc;
    }
    lVar6 = FUN_10036e72b(param_1);
    if (lVar6 == 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = 0x7a0a90;
        uStack_50 = 1;
        uStack_4e = 0;
        uStack_4c = 0x822;
        iStack_4a = 0x7a0ee9;
        uStack_46 = 1;
        uStack_44 = 0;
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      lVar7 = 0;
      FUN_1001782e9(0,0);
      iVar8 = -0x17ffbffd;
      lVar6 = 0;
    }
    else {
      lVar7 = _AFCOperationCreateRemovePathAndContents(DAT_1008c4d90,lVar6,0);
      if (lVar7 == 0) {
        *(undefined1 *)(lVar4 + 0x6b9) = 2;
        lVar7 = 0;
      }
      else {
        iVar2 = FUN_10036ed41(lVar5,lVar7);
        if (iVar2 == -0x17ffbffa) {
          *(undefined1 *)(lVar4 + 0x6b9) = 2;
        }
        else {
          *(undefined1 *)(lVar4 + 0x6b9) = 1;
          if (iVar2 != -0x80) {
            if (iVar2 == 0) {
              iVar8 = 0;
              goto LAB_100375302;
            }
            uVar3 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar3,0x10);
            if (cVar1 != '\0') {
              local_58 = 0x8220202;
              local_54 = 0x7a0a90;
              uStack_50 = 1;
              uStack_4e = 0;
              uStack_4c = 0x400;
              iStack_4a = iVar2;
              __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
            }
          }
          cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
          iVar8 = iVar2;
          if (cVar1 != '\0') {
            local_58 = 0x4000302;
            uStack_50 = 0x842;
            uStack_4e = (undefined2)lVar6;
            uStack_4c = (undefined2)((ulong)lVar6 >> 0x10);
            iStack_4a = (int)((ulong)lVar6 >> 0x20);
            uStack_46 = 0x800;
            uStack_44 = (undefined2)lVar5;
            uStack_42 = (undefined6)((ulong)lVar5 >> 0x10);
            local_54 = iVar2;
            __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                                "AFC RemovePathAndContents failed (0x%08X) for \"%{public}@\" with connection %p"
                                ,&local_58,0x1c);
          }
        }
      }
    }
  }
LAB_100375302:
  FUN_10017060f(lVar7);
  FUN_10017060f(lVar6);
  FUN_10017060f(lVar5);
  FUN_10036d4d2(lVar4);
  uVar3 = FUN_10036db97(iVar8);
LAB_1003751c3:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar3;
}

