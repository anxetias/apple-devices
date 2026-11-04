// name: FUN_1001228f8
// address: 1001228f8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1001228f8(long *param_1,char *param_2,char *param_3,long param_4)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  int iVar12;
  uint uVar13;
  ulong uVar15;
  int iVar16;
  ulong uVar17;
  float fVar18;
  float fVar19;
  undefined1 local_c0 [8];
  ulong local_b8;
  char *local_b0;
  ulong local_a8;
  float local_9c;
  ulong local_98;
  long *local_90;
  byte local_88 [80];
  long local_38;
  long *plVar14;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_88[0x40] = 0;
  local_88[0x41] = 0;
  local_88[0x42] = 0;
  local_88[0x43] = 0;
  local_88[0x44] = 0;
  local_88[0x45] = 0;
  local_88[0x46] = 0;
  local_88[0x47] = 0;
  local_88[0x48] = 0;
  local_88[0x49] = 0;
  local_88[0x4a] = 0;
  local_88[0x4b] = 0;
  local_88[0x4c] = 0;
  local_88[0x4d] = 0;
  local_88[0x4e] = 0;
  local_88[0x30] = 0;
  local_88[0x31] = 0;
  local_88[0x32] = 0;
  local_88[0x33] = 0;
  local_88[0x34] = 0;
  local_88[0x35] = 0;
  local_88[0x36] = 0;
  local_88[0x37] = 0;
  local_88[0x38] = 0;
  local_88[0x39] = 0;
  local_88[0x3a] = 0;
  local_88[0x3b] = 0;
  local_88[0x3c] = 0;
  local_88[0x3d] = 0;
  local_88[0x3e] = 0;
  local_88[0x3f] = 0;
  local_88[0x20] = 0;
  local_88[0x21] = 0;
  local_88[0x22] = 0;
  local_88[0x23] = 0;
  local_88[0x24] = 0;
  local_88[0x25] = 0;
  local_88[0x26] = 0;
  local_88[0x27] = 0;
  local_88[0x28] = 0;
  local_88[0x29] = 0;
  local_88[0x2a] = 0;
  local_88[0x2b] = 0;
  local_88[0x2c] = 0;
  local_88[0x2d] = 0;
  local_88[0x2e] = 0;
  local_88[0x2f] = 0;
  local_88[0x10] = 0;
  local_88[0x11] = 0;
  local_88[0x12] = 0;
  local_88[0x13] = 0;
  local_88[0x14] = 0;
  local_88[0x15] = 0;
  local_88[0x16] = 0;
  local_88[0x17] = 0;
  local_88[0x18] = 0;
  local_88[0x19] = 0;
  local_88[0x1a] = 0;
  local_88[0x1b] = 0;
  local_88[0x1c] = 0;
  local_88[0x1d] = 0;
  local_88[0x1e] = 0;
  local_88[0x1f] = 0;
  local_88[0] = 0;
  local_88[1] = 0;
  local_88[2] = 0;
  local_88[3] = 0;
  local_88[4] = 0;
  local_88[5] = 0;
  local_88[6] = 0;
  local_88[7] = 0;
  local_88[8] = 0;
  local_88[9] = 0;
  local_88[10] = 0;
  local_88[0xb] = 0;
  local_88[0xc] = 0;
  local_88[0xd] = 0;
  local_88[0xe] = 0;
  local_88[0xf] = 0;
  local_b0 = param_3;
  local_90 = param_1;
  FUN_100118fc2(local_c0,*(undefined4 *)(*(long *)(param_4 + 0x18) + 4),0);
  uVar4 = FUN_100118fea(local_c0,*(undefined1 *)(param_4 + 9));
  uVar15 = (ulong)uVar4;
  bVar1 = *(byte *)(param_4 + 10);
  if (bVar1 < 0xe) {
    FUN_100118fc2(local_c0,*(undefined4 *)(*(long *)(param_4 + 0x18) + 4),0);
    uVar5 = FUN_100119030(local_c0,bVar1);
  }
  else if (bVar1 == 0xe) {
    uVar5 = uVar4 * 2;
  }
  else {
    uVar5 = uVar4 * 3;
  }
  uVar17 = 0x40;
  if (uVar5 < 0x40) {
    uVar17 = (ulong)uVar5;
  }
  uVar9 = (uint)uVar17;
  iVar16 = -2;
  uVar5 = uVar9 - uVar4;
  if ((uVar4 <= uVar9 && uVar5 != 0) && (uVar5 < 0x31)) {
    uVar13 = *(uint *)(*(long *)(param_4 + 0x18) + 4);
    if ((uVar5 < 0x24 || uVar13 != 0xac44) && (uVar5 < 0x21 || uVar13 < 48000)) {
      if (*(byte *)(param_4 + 0xc) == 0) {
        cVar2 = *(char *)(param_4 + 0xd);
        uVar13 = (uVar5 >> 1) + 1;
        if (cVar2 == '\0') {
          uVar13 = uVar5;
        }
        uVar13 = uVar13 & 0x3e;
        plVar14 = (long *)(ulong)uVar13;
        if (uVar13 != 0) {
          iVar16 = uVar4 + (uVar13 << (cVar2 != '\0'));
          local_90 = plVar14;
          _memset(local_88,(cVar2 != '\0') + 1,(size_t)plVar14);
          uVar13 = uVar9 - iVar16;
          uVar5 = 0xffffffff;
          if ((int)uVar13 < 1) {
            uVar5 = uVar13 >> 0x1f;
          }
          if (uVar13 != 0) {
            iVar10 = 0;
            iVar12 = (int)local_90;
            if ((int)uVar13 < 0) {
              iVar12 = 0;
            }
            if (0 < (int)uVar13) {
              iVar12 = (int)local_90 + -1;
            }
            do {
              local_88[(uint)(iVar12 + iVar10)] = local_88[(uint)(iVar12 + iVar10)] - (char)uVar5;
              iVar10 = iVar10 + uVar5;
            } while (iVar16 - uVar9 != iVar10);
          }
          *param_2 = (char)uVar4;
          param_2[1] = local_88[0] + (char)uVar4;
          lVar11 = 0;
          do {
            bVar1 = local_88[lVar11 + 1];
            param_2[lVar11 + 2] = bVar1 + param_2[lVar11 + 1];
            param_2[lVar11 + 3] = bVar1 + param_2[lVar11 + 1] + local_88[lVar11 + 2];
            plVar7 = (long *)(lVar11 + 4);
            lVar11 = lVar11 + 2;
          } while (plVar7 <= plVar14);
          *local_b0 = (char)local_90;
          iVar16 = 0;
        }
      }
      else {
        fVar18 = *(float *)(&DAT_100707aac + (ulong)(*(byte *)(param_4 + 0xc) - 1) * 4);
        if (uVar4 * 0x8c5 < uVar9 * 1000) {
          uVar5 = uVar4 * 2;
          fVar19 = *(float *)((long)local_90 + (ulong)uVar5 * 4 + 0xc150);
          iVar12 = (int)((fVar19 - *(float *)((long)local_90 + uVar15 * 4 + 0xc150)) * DAT_100700b28
                         * fVar18 + DAT_100700b28);
          if (iVar12 == 0) goto LAB_100122e35;
          fVar18 = fVar18 * (*(float *)((long)local_90 + uVar17 * 4 + 0xc150) - fVar19) *
                            DAT_100700b28;
          if (*(char *)(param_4 + 0xd) != '\0') {
            fVar18 = fVar18 * _DAT_100707658;
          }
          if ((int)(fVar18 + DAT_100700b28) == 0) goto LAB_100122e35;
          uVar8 = (ulong)(uint)(iVar12 * 2);
          local_b8 = (ulong)(uint)((int)(fVar18 + DAT_100700b28) * 2);
          local_9c = (float)(int)uVar5;
          local_a8 = (ulong)uVar5;
          local_98 = uVar8;
          fVar18 = (float)_powf(*(float *)(local_90[0x1828] + uVar15 * 4) * local_9c,
                                *(undefined4 *)(local_90[0x1828] + uVar8 * 4));
          fVar19 = (float)(int)uVar4;
          uVar6 = 0;
          uVar17 = uVar15;
          do {
            fVar19 = fVar19 * fVar18;
            local_88[uVar6] = (char)(int)(fVar19 + DAT_100700b28) - (char)uVar17;
            uVar6 = uVar6 + 1;
            uVar17 = (ulong)(uint)(int)(fVar19 + DAT_100700b28);
          } while (uVar8 != uVar6);
          (**(code **)(*local_90 + 0x68))(local_90,local_88,local_98);
          plVar14 = local_90;
          if (local_88[0] == 0) goto LAB_100122e35;
          FUN_100122e60(local_90,uVar15,local_88,local_98,param_2);
          uVar17 = local_a8;
          uVar15 = local_b8;
          uVar4 = (uint)local_b8;
          fVar18 = (float)_powf((float)(int)uVar9 * *(float *)(plVar14[0x1828] + local_a8 * 4),
                                *(undefined4 *)(plVar14[0x1828] + (local_b8 & 0xffffffff) * 4));
          plVar14 = local_90;
          uVar6 = 2;
          if (2 < (uVar4 | 1)) {
            uVar6 = (ulong)(uVar4 | 1);
          }
          lVar11 = 0;
          uVar17 = uVar17 & 0xffffffff;
          fVar19 = local_9c;
          do {
            fVar19 = fVar19 * fVar18;
            local_88[lVar11 + 0x1d] = (char)(int)(fVar19 + DAT_100700b28) - (char)uVar17;
            lVar11 = lVar11 + 1;
            uVar17 = (ulong)(uint)(int)(fVar19 + DAT_100700b28);
          } while (uVar6 - 1 != lVar11);
          pbVar3 = local_88 + 0x1d;
          (**(code **)(*local_90 + 0x68))(local_90,pbVar3,uVar15 & 0xffffffff);
          if (local_88[0x1d] < local_88[(int)local_98 - 1]) {
            uVar9 = (uint)local_88[(int)local_98 - 1] - (uint)local_88[0x1d];
            uVar5 = (uint)local_88[(ulong)(uVar4 - 1) + 0x1d] - (uint)local_88[0x1d] >> 1;
            if ((int)uVar9 < (int)uVar5) {
              uVar5 = uVar9;
            }
            local_88[0x1d] = local_88[0x1d] + (char)uVar5;
            local_88[(ulong)(uVar4 - 1) + 0x1d] = local_88[(ulong)(uVar4 - 1) + 0x1d] - (char)uVar5;
            (**(code **)(*plVar14 + 0x68))(plVar14,pbVar3,uVar15 & 0xffffffff);
          }
          FUN_100122e60(plVar14,local_a8,pbVar3,uVar15 & 0xffffffff,param_2 + uVar8);
          uVar17 = (ulong)((int)local_98 + uVar4);
        }
        else {
          iVar12 = (int)(fVar18 * (*(float *)((long)local_90 + uVar17 * 4 + 0xc150) -
                                  *(float *)((long)local_90 + uVar15 * 4 + 0xc150)) * DAT_100700b28
                        + DAT_100700b28);
          if (iVar12 == 0) goto LAB_100122e35;
          uVar5 = iVar12 * 2;
          local_98 = (ulong)uVar5;
          fVar18 = (float)_powf((float)(int)uVar9 * *(float *)(local_90[0x1828] + uVar15 * 4),
                                *(undefined4 *)(local_90[0x1828] + (ulong)uVar5 * 4));
          plVar14 = local_90;
          uVar17 = local_98;
          fVar19 = (float)(int)uVar4;
          uVar8 = 0;
          uVar6 = uVar15;
          do {
            fVar19 = fVar19 * fVar18;
            local_88[uVar8] = (char)(int)(fVar19 + DAT_100700b28) - (char)uVar6;
            uVar8 = uVar8 + 1;
            uVar6 = (ulong)(uint)(int)(fVar19 + DAT_100700b28);
          } while (uVar5 != uVar8);
          (**(code **)(*local_90 + 0x68))(local_90,local_88,local_98 & 0xffffffff);
          if (local_88[0] == 0) goto LAB_100122e35;
          FUN_100122e60(plVar14,uVar15,local_88,uVar17 & 0xffffffff,param_2);
        }
        *local_b0 = (char)uVar17;
        iVar16 = (uint)((char)uVar17 != '\0') * 2 + -2;
      }
    }
  }
LAB_100122e35:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar16;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

