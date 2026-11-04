// name: FUN_1002781b2
// address: 1002781b2

void FUN_1002781b2(long *param_1,long *param_2,int *param_3,undefined8 *param_4)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  int *piVar11;
  long lVar12;
  int *piVar13;
  uint uVar14;
  uint uVar15;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar7 = *param_2;
  if (lVar7 == 0) {
    iVar6 = (int)param_2[1];
    if (iVar6 == 0) {
      iVar4 = 0x40;
    }
    else {
      iVar4 = iVar6 * 2;
      if ((int)param_2[2] * 6 < iVar6 * 2) {
        iVar4 = iVar6;
      }
    }
    FUN_100278578(param_2,iVar4);
    lVar7 = *param_2;
    if (lVar7 == 0) {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "m_table";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      lVar7 = *param_2;
    }
  }
  iVar4 = *param_3;
  uVar10 = ~(iVar4 << 0xf) + iVar4;
  uVar10 = (uVar10 >> 10 ^ uVar10) * 9;
  uVar10 = uVar10 >> 6 ^ uVar10;
  uVar10 = ~(uVar10 << 0xb) + uVar10;
  uVar15 = uVar10 >> 0x10 ^ uVar10;
  uVar14 = uVar15 & *(uint *)((long)param_2 + 0xc);
  piVar13 = (int *)(lVar7 + (long)(int)uVar14 * 0x10);
  iVar6 = *(int *)(lVar7 + (long)(int)uVar14 * 0x10);
  if (iVar6 != 0) {
    uVar15 = (uVar10 >> 0x17) + ~uVar15;
    uVar15 = uVar15 * 0x1000 ^ uVar15;
    uVar15 = uVar15 >> 7 ^ uVar15;
    uVar15 = uVar15 * 4 ^ uVar15;
    piVar11 = (int *)0x0;
    uVar10 = 0;
    do {
      if (iVar6 == iVar4) {
        lVar12 = param_2[1];
        *param_1 = (long)piVar13;
        param_1[1] = lVar7 + (long)(int)lVar12 * 0x10;
        *(undefined1 *)(param_1 + 2) = 0;
        goto LAB_1002784b3;
      }
      if (iVar6 == -1) {
        piVar11 = piVar13;
      }
      if (uVar10 == 0) {
        uVar10 = uVar15 >> 0x14 ^ uVar15 | 1;
      }
      uVar14 = uVar14 + uVar10 & *(uint *)((long)param_2 + 0xc);
      piVar13 = (int *)(lVar7 + (long)(int)uVar14 * 0x10);
      iVar6 = *(int *)(lVar7 + (long)(int)uVar14 * 0x10);
    } while (iVar6 != 0);
    if (piVar11 != (int *)0x0) {
      *piVar11 = 0;
      piVar11[2] = 0;
      piVar11[3] = 0;
      iVar6 = *(int *)((long)param_2 + 0x14) + -1;
      *(int *)((long)param_2 + 0x14) = iVar6;
      iVar4 = *param_3;
      goto LAB_100278327;
    }
  }
  piVar11 = piVar13;
  iVar6 = *(int *)((long)param_2 + 0x14);
LAB_100278327:
  *piVar11 = iVar4;
  *(undefined8 *)(piVar11 + 2) = *param_4;
  lVar7 = param_2[2];
  iVar4 = (int)lVar7 + 1;
  *(int *)(param_2 + 2) = iVar4;
  iVar1 = (int)param_2[1];
  if ((iVar6 + (int)lVar7 + 1) * 2 < iVar1) {
    lVar7 = *param_2;
    *param_1 = (long)piVar11;
    param_1[1] = (long)iVar1 * 0x10 + lVar7;
    *(undefined1 *)(param_1 + 2) = 1;
  }
  else {
    iVar6 = *piVar11;
    iVar2 = iVar1 * 2;
    if (iVar4 * 6 < iVar1 * 2) {
      iVar2 = iVar1;
    }
    iVar4 = 0x40;
    if (iVar1 != 0) {
      iVar4 = iVar2;
    }
    FUN_100278578(param_2,iVar4);
    lVar7 = *param_2;
    if (lVar7 == 0) {
      lVar8 = (long)(int)param_2[1];
      lVar9 = lVar8 << 4;
      lVar12 = lVar9;
    }
    else {
      uVar10 = ~(iVar6 << 0xf) + iVar6;
      uVar10 = (uVar10 >> 10 ^ uVar10) * 9;
      uVar10 = uVar10 >> 6 ^ uVar10;
      uVar10 = ~(uVar10 << 0xb) + uVar10;
      uVar15 = uVar10 >> 0x10 ^ uVar10;
      uVar14 = *(uint *)((long)param_2 + 0xc) & uVar15;
      lVar12 = (long)(int)uVar14 * 0x10;
      iVar4 = *(int *)(lVar7 + lVar12);
      if (iVar4 != iVar6) {
        uVar15 = (uVar10 >> 0x17) + ~uVar15;
        uVar15 = uVar15 * 0x1000 ^ uVar15;
        uVar15 = uVar15 >> 7 ^ uVar15;
        uVar15 = uVar15 * 4 ^ uVar15;
        uVar10 = 0;
        do {
          if (iVar4 == 0) {
            lVar8 = (long)(int)param_2[1];
            lVar9 = lVar8 * 0x10 + lVar7;
            lVar12 = lVar9;
            goto LAB_10027847a;
          }
          if (uVar10 == 0) {
            uVar10 = uVar15 >> 0x14 ^ uVar15 | 1;
          }
          uVar14 = uVar14 + uVar10 & *(uint *)((long)param_2 + 0xc);
          lVar12 = (long)(int)uVar14 * 0x10;
          iVar4 = *(int *)(lVar7 + lVar12);
        } while (iVar4 != iVar6);
      }
      lVar8 = (long)(int)param_2[1];
      lVar9 = lVar8 * 0x10 + lVar7;
      lVar12 = lVar12 + lVar7;
    }
LAB_10027847a:
    *param_1 = lVar12;
    param_1[1] = lVar9;
    *(undefined1 *)(param_1 + 2) = 1;
    if (lVar12 == lVar7 + lVar8 * 0x10) {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "p.first != end()";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
  }
LAB_1002784b3:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

