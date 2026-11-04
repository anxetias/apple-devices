// name: FUN_10049bea4
// address: 10049bea4

void FUN_10049bea4(undefined1 (*param_1) [16],long *param_2,long *param_3,long *param_4)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  long *plVar9;
  int iVar10;
  long *plVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar5 = *param_2;
  if (lVar5 == 0) {
    iVar3 = (int)param_2[1];
    if (iVar3 == 0) {
      iVar10 = 0x40;
    }
    else {
      iVar10 = iVar3 * 2;
      if ((int)param_2[2] * 6 < iVar3 * 2) {
        iVar10 = iVar3;
      }
    }
    FUN_10049c1b8(param_2,iVar10);
    lVar5 = *param_2;
    if (lVar5 == 0) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "m_table";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      lVar5 = *param_2;
    }
  }
  lVar14 = *param_3;
  uVar8 = ~(lVar14 << 0x20) + lVar14;
  uVar8 = uVar8 >> 0x16 ^ uVar8;
  uVar8 = ~(uVar8 << 0xd) + uVar8;
  uVar8 = (uVar8 >> 8 ^ uVar8) * 9;
  uVar8 = uVar8 >> 0xf ^ uVar8;
  uVar8 = ~(uVar8 << 0x1b) + uVar8;
  uVar6 = (uint)(uVar8 >> 0x1f) ^ (uint)uVar8;
  uVar12 = *(uint *)((long)param_2 + 0xc) & uVar6;
  plVar11 = (long *)(lVar5 + (long)(int)uVar12 * 0x10);
  lVar13 = *(long *)(lVar5 + (long)(int)uVar12 * 0x10);
  if (lVar13 != 0) {
    uVar7 = (uVar6 >> 0x17) + ~uVar6;
    uVar7 = uVar7 * 0x1000 ^ uVar7;
    uVar7 = uVar7 >> 7 ^ uVar7;
    uVar7 = uVar7 * 4 ^ uVar7;
    plVar9 = (long *)0x0;
    uVar6 = 0;
    do {
      if (lVar13 == lVar14) {
        lVar13 = param_2[1];
        *(long **)*param_1 = plVar11;
        *(long *)(*param_1 + 8) = lVar5 + (long)(int)lVar13 * 0x10;
        param_1[1][0] = 0;
        goto LAB_10049c0f3;
      }
      if (lVar13 == -1) {
        plVar9 = plVar11;
      }
      if (uVar6 == 0) {
        uVar6 = uVar7 >> 0x14 ^ uVar7 | 1;
      }
      uVar12 = uVar12 + uVar6 & *(uint *)((long)param_2 + 0xc);
      plVar11 = (long *)(lVar5 + (long)(int)uVar12 * 0x10);
      lVar13 = *(long *)(lVar5 + (long)(int)uVar12 * 0x10);
    } while (lVar13 != 0);
    if (plVar9 != (long *)0x0) {
      *plVar9 = 0;
      plVar9[1] = 0;
      iVar3 = *(int *)((long)param_2 + 0x14) + -1;
      *(int *)((long)param_2 + 0x14) = iVar3;
      lVar14 = *param_3;
      goto LAB_10049c036;
    }
  }
  plVar9 = plVar11;
  iVar3 = *(int *)((long)param_2 + 0x14);
LAB_10049c036:
  *plVar9 = lVar14;
  plVar9[1] = *param_4;
  lVar5 = param_2[2];
  iVar10 = (int)lVar5 + 1;
  *(int *)(param_2 + 2) = iVar10;
  iVar1 = (int)param_2[1];
  if (((int)lVar5 + iVar3 + 1) * 2 < iVar1) {
    lVar5 = *param_2;
    *(long **)*param_1 = plVar9;
    *(long *)(*param_1 + 8) = (long)iVar1 * 0x10 + lVar5;
    param_1[1][0] = 1;
  }
  else {
    iVar3 = iVar1 * 2;
    if (iVar10 * 6 < iVar1 * 2) {
      iVar3 = iVar1;
    }
    iVar10 = 0x40;
    if (iVar1 != 0) {
      iVar10 = iVar3;
    }
    FUN_10049c1b8(param_2,iVar10);
    auVar15 = FUN_10049c5a2(param_2,lVar14);
    *param_1 = auVar15;
    param_1[1][0] = 1;
    if (auVar15._0_8_ == (long)(int)param_2[1] * 0x10 + *param_2) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "p.first != end()";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
  }
LAB_10049c0f3:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

