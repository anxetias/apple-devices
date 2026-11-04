// name: FUN_1005ac748
// address: 1005ac748

void FUN_1005ac748(long param_1,int param_2,long param_3,long param_4)

{
  void *pvVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  bool bVar12;
  undefined4 local_898;
  char *local_894;
  undefined2 local_88c;
  int local_88a;
  undefined1 local_878 [1056];
  undefined4 local_458;
  char *local_454;
  undefined2 local_44c;
  int local_44a;
  undefined2 uStack_446;
  undefined2 uStack_444;
  undefined6 uStack_442;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_4 == 0) {
    uVar8 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar8,0x10);
    if (cVar4 != '\0') {
      local_458 = 0x8220202;
      local_454 = "Assertion failure";
      local_44c = 0x822;
      local_44a = 0x7ee4b9;
      uStack_446 = 1;
      uStack_444 = 0;
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_1005acd85;
  }
  if (param_3 == 0) goto LAB_1005acd85;
  plVar11 = (long *)(param_1 + 0x1660);
  plVar7 = (long *)FUN_1005b0928(plVar11);
  if (plVar7 != (long *)(param_1 + 0x1668)) {
    iVar5 = (int)plVar7[6];
    if (iVar5 == 0) {
      uVar8 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar8,0x10);
      if (cVar4 != '\0') {
        local_458 = 0x8220202;
        local_454 = "Assertion failure";
        local_44c = 0x822;
        local_44a = 0x7ee1e4;
        uStack_446 = 1;
        uStack_444 = 0;
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
      }
      FUN_1001782e9(0,0);
      iVar5 = (int)plVar7[6];
    }
    *(int *)(plVar7 + 6) = iVar5 + -1;
    if (iVar5 + -1 != 0) goto LAB_1005acd85;
    plVar10 = plVar7;
    plVar3 = (long *)plVar7[1];
    if ((long *)plVar7[1] == (long *)0x0) {
      do {
        plVar9 = (long *)plVar10[2];
        bVar12 = (long *)*plVar9 != plVar10;
        plVar10 = plVar9;
      } while (bVar12);
    }
    else {
      do {
        plVar9 = plVar3;
        plVar3 = (long *)*plVar9;
      } while ((long *)*plVar9 != (long *)0x0);
    }
    if ((long *)*plVar11 == plVar7) {
      *plVar11 = (long)plVar9;
    }
    *(long *)(param_1 + 0x1670) = *(long *)(param_1 + 0x1670) + -1;
    FUN_1001b7512(*(undefined8 *)(param_1 + 0x1668),plVar7);
    operator_delete(plVar7);
  }
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar8 = DAT_1008c75b8;
  cVar4 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar4 != '\0') {
    FUN_1001b8dfc(local_878,param_4);
    local_454 = (char *)FUN_1001b83ae(local_878);
    local_458 = 0x8220302;
    local_44c = 0x400;
    uStack_446 = 0x800;
    uStack_444 = (undefined2)param_3;
    uStack_442 = (undefined6)((ulong)param_3 >> 0x10);
    local_44a = param_2;
    __os_log_impl(0x100000000,uVar8,1,"speech> deleting clip \"%{public}s\" (id %X:%016llX)",
                  &local_458,0x1c);
    FUN_1001b7a50(local_878);
  }
  plVar11 = (long *)(param_1 + 0x1678);
  plVar7 = (long *)FUN_1005b0928(plVar11,param_2,param_3);
  if (plVar7 != (long *)(param_1 + 0x1680)) {
    plVar10 = plVar7;
    plVar3 = (long *)plVar7[1];
    if ((long *)plVar7[1] == (long *)0x0) {
      do {
        plVar9 = (long *)plVar10[2];
        bVar12 = (long *)*plVar9 != plVar10;
        plVar10 = plVar9;
      } while (bVar12);
    }
    else {
      do {
        plVar9 = plVar3;
        plVar3 = (long *)*plVar9;
      } while ((long *)*plVar9 != (long *)0x0);
    }
    if ((long *)*plVar11 == plVar7) {
      *plVar11 = (long)plVar9;
    }
    *(long *)(param_1 + 0x1688) = *(long *)(param_1 + 0x1688) + -1;
    FUN_1001b7512(*(undefined8 *)(param_1 + 0x1680),plVar7);
    operator_delete(plVar7);
  }
  FUN_1005a93cb();
  plVar11 = *(long **)(param_1 + 0x68);
  while (plVar11 != (long *)(param_1 + 0x60)) {
    pvVar1 = (void *)plVar11[2];
    if (pvVar1 == (void *)0x0) {
      uVar8 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar8,0x10);
      if (cVar4 != '\0') {
        local_458 = 0x8220202;
        local_454 = "Assertion failure (expected to be not NULL)";
        local_44c = 0x822;
        local_44a = 0x7ee597;
        uStack_446 = 1;
        uStack_444 = 0;
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
      }
      cVar4 = FUN_1001782e9(0,0);
      if (cVar4 != '\0') goto LAB_1005ac9f7;
LAB_1005aca45:
      plVar11 = (long *)plVar11[1];
    }
    else {
LAB_1005ac9f7:
      if ((*(int *)((long)pvVar1 + 0x58) != param_2) || (*(long *)((long)pvVar1 + 0x60) != param_3))
      goto LAB_1005aca45;
      lVar2 = *plVar11;
      plVar7 = (long *)plVar11[1];
      *(long **)(lVar2 + 8) = plVar7;
      *plVar7 = lVar2;
      *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) + -1;
      operator_delete(plVar11);
      FUN_1005a2236(pvVar1);
      operator_delete(pvVar1);
      plVar11 = plVar7;
    }
  }
  iVar5 = FUN_1005ae2e4(param_1,param_2,param_3,&local_458);
  if (iVar5 != 0) goto LAB_1005acad0;
  iVar6 = FUN_10017d5ba(&local_458,local_878);
  iVar5 = local_88a;
  if (iVar6 != -0x80) {
    if (iVar6 == 0) {
      iVar6 = FUN_100182d4d(&local_458);
      iVar5 = local_88a;
      if (iVar6 != -0x80) {
        if (iVar6 != 0) {
          uVar8 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar8,0x10);
          iVar5 = local_88a;
          goto joined_r0x0001005acc8d;
        }
        cVar4 = FUN_10018e1ff(local_878);
        if (cVar4 != '\0') {
          iVar6 = FUN_100182d59(local_878,0);
          iVar5 = local_88a;
          if (iVar6 == -0x80) goto LAB_1005acd79;
          if (iVar6 != 0) {
            uVar8 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar8,0x10);
            iVar5 = local_88a;
            goto joined_r0x0001005acc8d;
          }
        }
LAB_1005acad0:
        iVar5 = local_88a;
        if (*(long *)(param_1 + 0x16b8) != 0) {
          uVar8 = FUN_1001658f1(DAT_1008c4d90,param_4);
          iVar6 = FUN_1002f74ee(*(undefined8 *)(param_1 + 0x1598),*(undefined8 *)(param_1 + 0x16b8),
                                uVar8,*(undefined4 *)("mcplEVAW" + (long)param_2 * 4 + 8),param_3);
          FUN_10017060f(uVar8);
          iVar5 = local_88a;
          if ((iVar6 != -0x80) && (iVar6 != 0)) {
            uVar8 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar8,0x10);
            iVar5 = local_88a;
            goto joined_r0x0001005acc8d;
          }
        }
      }
    }
    else {
      uVar8 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar8,0x10);
      iVar5 = local_88a;
joined_r0x0001005acc8d:
      local_88a = iVar6;
      if (cVar4 != '\0') {
        local_88c = 0x400;
        local_894 = "Assertion failure";
        local_898 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_898,0x12);
        iVar5 = local_88a;
      }
    }
  }
LAB_1005acd79:
  local_88a = iVar5;
  FUN_1001e9eb9(param_1 + 0x18);
LAB_1005acd85:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

