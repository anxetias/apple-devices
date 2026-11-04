// name: FUN_100286791
// address: 100286791

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100286791(long param_1)

{
  undefined8 *puVar1;
  double *pdVar2;
  int iVar3;
  undefined1 auVar4 [16];
  ulong uVar5;
  double dVar6;
  char cVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar3 = *(int *)(param_1 + 0x280);
  *(int *)(param_1 + 0x508) = iVar3;
  uVar8 = *(uint *)(param_1 + 0x284);
  uVar9 = (ulong)uVar8;
  *(uint *)(param_1 + 0x50c) = uVar8;
  dVar6 = DAT_100701ae0;
  uVar5 = _DAT_100700b30;
  if (0 < (long)iVar3) {
    lVar11 = 0;
    do {
      dVar14 = *(double *)(param_1 + lVar11);
      dVar12 = dVar6 - dVar14;
      dVar14 = dVar14 + dVar6;
      dVar15 = ((double *)(param_1 + lVar11))[1] + 0.0;
      dVar16 = 0.0 - *(double *)(param_1 + 8 + lVar11);
      dVar13 = dVar12 * dVar12 + dVar16 * dVar16;
      auVar17._0_8_ = dVar12 * dVar14 + dVar15 * dVar16;
      auVar17._8_8_ = dVar12 * dVar15 + (double)((ulong)dVar14 ^ uVar5) * dVar16;
      auVar18._8_8_ = dVar13;
      auVar18._0_8_ = dVar13;
      auVar18 = divpd(auVar17,auVar18);
      *(undefined1 (*) [16])(param_1 + 0x288 + lVar11) = auVar18;
      lVar11 = lVar11 + 0x10;
    } while ((long)iVar3 << 4 != lVar11);
  }
  dVar6 = DAT_100701ae0;
  uVar5 = _DAT_100700b30;
  if (0 < (int)uVar8) {
    lVar11 = 0;
    do {
      pdVar2 = (double *)(param_1 + 0x140 + lVar11);
      dVar14 = *pdVar2;
      dVar12 = dVar6 - dVar14;
      dVar14 = dVar14 + dVar6;
      dVar15 = pdVar2[1] + 0.0;
      dVar16 = 0.0 - *(double *)(param_1 + 0x148 + lVar11);
      dVar13 = dVar12 * dVar12 + dVar16 * dVar16;
      auVar19._0_8_ = dVar12 * dVar14 + dVar15 * dVar16;
      auVar19._8_8_ = dVar12 * dVar15 + (double)((ulong)dVar14 ^ uVar5) * dVar16;
      auVar4._8_8_ = dVar13;
      auVar4._0_8_ = dVar13;
      auVar18 = divpd(auVar19,auVar4);
      *(undefined1 (*) [16])(param_1 + 0x3c8 + lVar11) = auVar18;
      lVar11 = lVar11 + 0x10;
    } while (uVar9 << 4 != lVar11);
  }
  if ((int)uVar8 < iVar3) {
    do {
      uVar8 = (uint)uVar9;
      if (0x13 < uVar8) {
        uVar10 = FUN_1001cc310();
        cVar7 = _os_log_type_enabled(uVar10,0x10);
        if (cVar7 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure (expected to be true)";
          local_4c = 0x822;
          local_4a = "filter->zPlane.numzeros < 20 && filter->zPlane.numzeros >= 0";
          __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        cVar7 = FUN_1001782e9(0,0);
        if (cVar7 == '\0') break;
        uVar8 = *(uint *)(param_1 + 0x50c);
      }
      *(uint *)(param_1 + 0x50c) = uVar8 + 1;
      uVar10 = _UNK_10073fa88;
      puVar1 = (undefined8 *)(param_1 + 0x3c8 + (long)(int)uVar8 * 0x10);
      *puVar1 = _DAT_10073fa80;
      puVar1[1] = uVar10;
      uVar9 = (ulong)*(uint *)(param_1 + 0x50c);
    } while ((int)*(uint *)(param_1 + 0x50c) < *(int *)(param_1 + 0x508));
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

