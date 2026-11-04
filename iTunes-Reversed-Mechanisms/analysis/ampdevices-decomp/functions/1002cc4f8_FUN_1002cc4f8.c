// name: FUN_1002cc4f8
// address: 1002cc4f8

void FUN_1002cc4f8(undefined1 (*param_1) [16],long *param_2,int *param_3,undefined8 *param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auVar14 [16];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar8 = *param_2;
  if (lVar8 == 0) {
    iVar7 = (int)param_2[1];
    if (iVar7 == 0) {
      iVar5 = 0x40;
    }
    else {
      iVar5 = iVar7 * 2;
      if ((int)param_2[2] * 6 < iVar7 * 2) {
        iVar5 = iVar7;
      }
    }
    FUN_1002cc7f0(param_2,iVar5);
    lVar8 = *param_2;
    if (lVar8 == 0) {
      uVar6 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar6,0x10);
      if (cVar4 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "m_table";
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      lVar8 = *param_2;
    }
  }
  iVar5 = *param_3;
  uVar9 = ~(iVar5 << 0xf) + iVar5;
  uVar9 = (uVar9 >> 10 ^ uVar9) * 9;
  uVar9 = uVar9 >> 6 ^ uVar9;
  uVar9 = ~(uVar9 << 0xb) + uVar9;
  uVar13 = uVar9 >> 0x10 ^ uVar9;
  uVar12 = uVar13 & *(uint *)((long)param_2 + 0xc);
  piVar11 = (int *)(lVar8 + (long)(int)uVar12 * 0x10);
  iVar7 = *(int *)(lVar8 + (long)(int)uVar12 * 0x10);
  if (iVar7 != 0) {
    uVar13 = (uVar9 >> 0x17) + ~uVar13;
    uVar13 = uVar13 * 0x1000 ^ uVar13;
    uVar13 = uVar13 >> 7 ^ uVar13;
    uVar13 = uVar13 * 4 ^ uVar13;
    piVar10 = (int *)0x0;
    uVar9 = 0;
    do {
      if (iVar7 == iVar5) {
        lVar3 = param_2[1];
        *(int **)*param_1 = piVar11;
        *(long *)(*param_1 + 8) = lVar8 + (long)(int)lVar3 * 0x10;
        param_1[1][0] = 0;
        goto LAB_1002cc72c;
      }
      if (iVar7 == -1) {
        piVar10 = piVar11;
      }
      if (uVar9 == 0) {
        uVar9 = uVar13 >> 0x14 ^ uVar13 | 1;
      }
      uVar12 = uVar12 + uVar9 & *(uint *)((long)param_2 + 0xc);
      piVar11 = (int *)(lVar8 + (long)(int)uVar12 * 0x10);
      iVar7 = *(int *)(lVar8 + (long)(int)uVar12 * 0x10);
    } while (iVar7 != 0);
    if (piVar10 != (int *)0x0) {
      *piVar10 = 0;
      piVar10[2] = 0;
      piVar10[3] = 0;
      iVar7 = *(int *)((long)param_2 + 0x14) + -1;
      *(int *)((long)param_2 + 0x14) = iVar7;
      iVar5 = *param_3;
      goto LAB_1002cc66d;
    }
  }
  piVar10 = piVar11;
  iVar7 = *(int *)((long)param_2 + 0x14);
LAB_1002cc66d:
  *piVar10 = iVar5;
  *(undefined8 *)(piVar10 + 2) = *param_4;
  lVar8 = param_2[2];
  iVar5 = (int)lVar8 + 1;
  *(int *)(param_2 + 2) = iVar5;
  iVar1 = (int)param_2[1];
  if ((iVar7 + (int)lVar8 + 1) * 2 < iVar1) {
    lVar8 = *param_2;
    *(int **)*param_1 = piVar10;
    *(long *)(*param_1 + 8) = (long)iVar1 * 0x10 + lVar8;
    param_1[1][0] = 1;
  }
  else {
    iVar7 = *piVar10;
    iVar2 = iVar1 * 2;
    if (iVar5 * 6 < iVar1 * 2) {
      iVar2 = iVar1;
    }
    iVar5 = 0x40;
    if (iVar1 != 0) {
      iVar5 = iVar2;
    }
    FUN_1002cc7f0(param_2,iVar5);
    auVar14 = FUN_1002ccbae(param_2,iVar7);
    *param_1 = auVar14;
    param_1[1][0] = 1;
    if (auVar14._0_8_ == (long)(int)param_2[1] * 0x10 + *param_2) {
      uVar6 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar6,0x10);
      if (cVar4 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "p.first != end()";
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
  }
LAB_1002cc72c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

