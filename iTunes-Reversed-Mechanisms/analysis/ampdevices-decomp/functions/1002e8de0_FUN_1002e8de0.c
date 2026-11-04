// name: FUN_1002e8de0
// address: 1002e8de0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1002e8de0(ulong param_1,int param_2,long *param_3)

{
  ushort uVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  undefined1 uVar6;
  char cVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  uint uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 == (long *)0x0) {
    uVar11 = FUN_1001cc310();
    cVar7 = _os_log_type_enabled(uVar11,0x10);
    if (cVar7 != '\0') {
      local_4a = "normData != nullptr";
LAB_1002e9169:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",&local_58,0x16);
    }
  }
  else {
    *param_3 = 0;
    if (param_2 - 1U < 2) {
      lVar9 = FUN_1001c6429(0x21b0);
      if (lVar9 == 0) {
        uVar11 = FUN_1001cc310();
        cVar7 = _os_log_type_enabled(uVar11,0x10);
        if (cVar7 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "localData != nullptr";
          __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
        iVar8 = -0x6c;
        goto LAB_1002e90a9;
      }
      iVar8 = FUN_10055abdd(10);
      if (iVar8 == -0x80) {
LAB_1002e911f:
        if (*(long *)(lVar9 + 0x20a0) != 0) {
          FUN_10055add4();
        }
        FUN_1001c64c1(lVar9);
      }
      else {
        if (iVar8 == 0) {
          *(int *)(lVar9 + 0x2174) = param_2;
          *(int *)(lVar9 + 0x2170) = (int)param_1;
          dVar4 = (double)(param_1 & 0xffffffff);
          auVar3._8_4_ = SUB84(dVar4,0);
          auVar3._0_8_ = dVar4;
          auVar3._12_4_ = (int)((ulong)dVar4 >> 0x20);
          lVar12 = 0x415;
          uVar13 = 0;
          do {
            uVar1 = *(ushort *)(&UNK_1007425de + lVar12 * 4);
            if (((uint)(param_1 >> 1) & 0x7fffffff) < (uint)uVar1) {
              *(undefined8 *)(lVar9 + lVar12 * 8) = 0;
            }
            else {
              dVar5 = (double)*(ushort *)(&UNK_1007425dc + lVar12 * 4) / _DAT_100708b48;
              dVar4 = (double)_pow(SUB84(dVar5,0),DAT_1007425d0);
              dVar2 = (double)_exp(SUB84((dVar5 + _DAT_1007425d8) * _DAT_1007425e0 *
                                         (dVar5 + _DAT_1007425d8),0));
              dVar4 = (double)___exp10(SUB84((dVar2 * _DAT_1007117a0 + dVar4 * _DAT_1007425e8 +
                                             dVar5 * dVar5 * dVar5 * dVar5 * _DAT_100712280) /
                                             DAT_10073fd98,0));
              auVar14._8_8_ = 0;
              auVar14._0_8_ = (ulong)uVar13 | (ulong)uVar1 << 0x10;
              auVar14 = pmovzxwd(auVar14,auVar14);
              auVar15._0_8_ = (double)auVar14._0_4_ * _DAT_1007425f0;
              auVar15._8_8_ = (double)auVar14._4_4_ * _UNK_1007425f8;
              auVar14 = divpd(auVar15,auVar3);
              auVar16._0_4_ = (int)(auVar14._0_8_ + _DAT_10070e610);
              auVar16._4_4_ = (int)(auVar14._8_8_ + _UNK_10070e618);
              auVar16._8_8_ = 0;
              auVar14 = pshuflw(auVar16,auVar16,0xe8);
              *(int *)(lVar9 + lVar12 * 8) = auVar14._0_4_;
              *(float *)(lVar9 + 4 + lVar12 * 8) = (float)dVar4;
            }
            lVar12 = lVar12 + 1;
            uVar13 = (uint)uVar1;
          } while (lVar12 != 0x42e);
          *(undefined4 *)(lVar9 + 0x2178) = 0;
          *(undefined8 *)(lVar9 + 0x2180) = 0;
          *(undefined8 *)(lVar9 + 0x2188) = 0;
          *(undefined8 *)(lVar9 + 0x2190) = 0;
          *(undefined8 *)(lVar9 + 0x2198) = 0;
          *(undefined8 *)(lVar9 + 0x21a0) = 0;
          *(undefined8 *)(lVar9 + 0x21a8) = 0;
          uVar6 = FUN_10018ea7c();
          *(undefined1 *)(lVar9 + 0x217c) = uVar6;
          uVar10 = lVar9 + 0x1fU & 0xffffffffffffffe0;
          *(ulong *)(lVar9 + 0x2080) = uVar10;
          *(ulong *)(lVar9 + 0x2088) = uVar10 + 0x800;
          *(ulong *)(lVar9 + 0x2090) = uVar10 + 0x1000;
          *(ulong *)(lVar9 + 0x2098) = uVar10 + 0x1800;
          *param_3 = lVar9;
        }
        else {
          uVar11 = FUN_1001cc310();
          cVar7 = _os_log_type_enabled(uVar11,0x10);
          if (cVar7 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x400;
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar8);
            __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",&local_58,0x12);
          }
          if (iVar8 != 0) goto LAB_1002e911f;
        }
        iVar8 = 0;
      }
      goto LAB_1002e90a9;
    }
    uVar11 = FUN_1001cc310();
    cVar7 = _os_log_type_enabled(uVar11,0x10);
    if (cVar7 != '\0') {
      local_4a = "numChannels == 1 || numChannels == 2";
      goto LAB_1002e9169;
    }
  }
  FUN_1001782e9(0,0);
  iVar8 = -0x32;
LAB_1002e90a9:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

