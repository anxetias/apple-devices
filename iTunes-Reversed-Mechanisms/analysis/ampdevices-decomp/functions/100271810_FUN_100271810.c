// name: FUN_100271810
// address: 100271810

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100271810(uint *param_1,long param_2,long *param_3,uint param_4,int param_5,uint param_6,
                  uint param_7)

{
  bool bVar1;
  float fVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  char cVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  double dVar15;
  float fVar16;
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (uint *)0x0) {
    uVar7 = FUN_1001cc310();
    cVar6 = _os_log_type_enabled(uVar7,0x10);
    if (cVar6 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "seekPositions != nullptr";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    FUN_1001c62d9(param_1,0x814);
    *(bool *)(param_1 + 0x204) = param_2 == 0 && param_3 == (long *)0x0;
    uVar13 = param_5 - param_4;
    *param_1 = uVar13;
    param_1[2] = param_6;
    param_1[1] = param_4;
    fVar5 = DAT_10071c6fc;
    fVar4 = DAT_10071c6f8;
    auVar3 = _DAT_1007114e0;
    fVar2 = DAT_10070bcf0;
    if (param_7 != 0) {
      dVar15 = 0.0;
      uVar10 = 0;
      uVar11 = param_4;
      do {
        param_1[uVar10 * 2 + 4] = (uint)(long)dVar15;
        if (param_2 == 0 && param_3 == (long *)0x0) {
          param_1[uVar10 * 2 + 5] = uVar11;
          uVar11 = uVar11 + uVar13 / (param_7 - 1);
        }
        else if (param_2 == 0) {
          if (param_3 != (long *)0x0) {
            fVar18 = (float)*(uint *)(param_3 + 1);
            fVar16 = fVar18 / (float)(*(uint *)((long)param_3 + 0xc) + 1);
            if ((float)dVar15 <= fVar18) {
              fVar18 = (float)dVar15;
            }
            if (0.0 <= fVar18) {
              iVar12 = 0;
              auVar17 = ZEXT816(0);
              uVar9 = 1;
              do {
                uVar14 = *(uint *)(*param_3 + (ulong)(uVar9 - 1) * 4);
                iVar12 = iVar12 + uVar14;
                auVar17._0_4_ = auVar17._0_4_ + fVar16;
                if (fVar18 < auVar17._0_4_) break;
                bVar1 = uVar9 <= *(uint *)((long)param_3 + 0xc);
                uVar9 = uVar9 + 1;
              } while (bVar1);
            }
            else {
              uVar14 = *(uint *)(*param_3 + 0x3fffffffc);
              auVar17 = ZEXT816(0);
              iVar12 = 0;
            }
            auVar20._4_12_ = auVar17._4_12_;
            auVar20._0_4_ = auVar17._0_4_ - fVar18;
            fVar18 = (float)*(uint *)(param_3 + 2);
            auVar20 = blendps(auVar20,auVar3,0xe);
            auVar17 = insertps(ZEXT416((uint)fVar16),ZEXT416((uint)(fVar18 + fVar18)),0x10);
            auVar17 = divps(auVar20,auVar17);
            param_1[uVar10 * 2 + 5] =
                 (iVar12 + param_4) -
                 (int)(long)(((float)((long)((auVar17._0_4_ + auVar17._4_4_) * fVar18) & 0xffffffff)
                             * (float)uVar14) / fVar18);
          }
        }
        else {
          fVar16 = ((float)(uVar10 & 0xffffffff) / (float)param_7) * fVar2;
          fVar18 = 0.0;
          if (0.0 <= fVar16) {
            fVar18 = fVar16;
          }
          fVar16 = fVar2;
          if (fVar18 <= fVar2) {
            fVar16 = fVar18;
          }
          iVar8 = (int)fVar16;
          iVar12 = iVar8;
          if (0x62 < iVar8) {
            iVar12 = 99;
          }
          fVar18 = fVar4;
          if (iVar8 < 99) {
            fVar18 = (float)*(byte *)(param_2 + 1 + (long)iVar12);
          }
          fVar19 = (float)*(byte *)(param_2 + iVar12);
          param_1[uVar10 * 2 + 5] =
               (int)(long)(((fVar16 - (float)iVar12) * (fVar18 - fVar19) + fVar19) * fVar5 *
                          (float)(int)uVar13) + param_4;
        }
        dVar15 = dVar15 + (double)param_6 / (double)(param_7 - 1);
        uVar10 = uVar10 + 1;
      } while (uVar10 != param_7);
    }
    if (param_3 != (long *)0x0) {
      uVar11 = param_1[(ulong)(param_7 - 1) * 2 + 5];
      if (((double)uVar11 < (double)uVar13 * _DAT_10071c718) && (param_7 != 0)) {
        uVar10 = 0;
        do {
          param_1[uVar10 * 2 + 5] =
               (uint)(long)((float)param_1[uVar10 * 2 + 5] * ((float)uVar13 / (float)uVar11));
          uVar10 = uVar10 + 1;
        } while (param_7 != uVar10);
      }
    }
    param_1[3] = param_7;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

