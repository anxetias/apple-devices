// name: FUN_100120a06
// address: 100120a06

void FUN_100120a06(long param_1,long param_2,long param_3,long param_4)

{
  void *pvVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  int iVar16;
  uint uVar17;
  undefined4 *puVar18;
  undefined8 local_70;
  byte local_68 [48];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  bVar2 = *(byte *)(param_4 + 1);
  uVar15 = (ulong)bVar2;
  local_70 = *(int **)(param_1 + 0x40);
  *local_70 = *local_70 + 1;
  iVar4 = *(int *)(param_1 + 0x28);
  uVar12 = iVar4 + 1;
  *(uint *)(param_1 + 0x28) = uVar12;
  if (uVar12 < 0x20) {
    uVar12 = *(uint *)(param_1 + 0x2c);
    *(uint *)(param_1 + 0x2c) = uVar12 * 2;
  }
  else if (uVar12 == 0x20) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    uVar12 = *(int *)(param_1 + 0x18) + 1;
    *(uint *)(param_1 + 0x18) = uVar12;
    uVar17 = 0;
    if (uVar12 < *(uint *)(param_1 + 0x34)) {
      *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
      uVar17 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar12 * 4);
    }
    uVar12 = *(uint *)(param_1 + 0x2c);
    *(uint *)(param_1 + 0x2c) =
         uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 | uVar17 << 0x18;
  }
  else {
    *(int *)(param_1 + 0x28) = iVar4 + -0x1f;
    lVar11 = *(long *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar11 + 4;
    uVar12 = *(uint *)(lVar11 + 4);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    uVar17 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 | uVar12 << 0x18;
    uVar12 = uVar17 >> (-(char)iVar4 & 0x1fU) | *(uint *)(param_1 + 0x2c);
    *(uint *)(param_1 + 0x2c) = uVar17 << ((byte)(iVar4 + -0x1f) & 0x1f);
  }
  *(byte *)(param_2 + 0xe9c) = (byte)(uVar12 >> 0x1f);
  pvVar1 = (void *)(param_2 + 0xc14);
  _memset_pattern16(pvVar1,&DAT_100707640,0xc0);
  puVar9 = (uint *)(param_3 + 0xf0);
  uVar17 = (uint)bVar2;
  if ((int)uVar12 < 0) {
    ___bzero(local_68);
    if (uVar15 != 0) {
      uVar7 = 0;
      do {
        *local_70 = *local_70 + 1;
        iVar4 = *(int *)(param_1 + 0x28);
        uVar12 = iVar4 + 1;
        *(uint *)(param_1 + 0x28) = uVar12;
        if (uVar12 < 0x20) {
          uVar12 = *(uint *)(param_1 + 0x2c);
          uVar10 = uVar12 * 2;
        }
        else if (uVar12 == 0x20) {
          *(undefined4 *)(param_1 + 0x28) = 0;
          uVar10 = *(int *)(param_1 + 0x18) + 1;
          *(uint *)(param_1 + 0x18) = uVar10;
          uVar12 = 0;
          if (uVar10 < *(uint *)(param_1 + 0x34)) {
            *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
            uVar12 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar10 * 4);
          }
          uVar10 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                   uVar12 << 0x18;
          uVar12 = *(uint *)(param_1 + 0x2c);
        }
        else {
          *(int *)(param_1 + 0x28) = iVar4 + -0x1f;
          lVar11 = *(long *)(param_1 + 0x10);
          *(long *)(param_1 + 0x10) = lVar11 + 4;
          uVar12 = *(uint *)(lVar11 + 4);
          *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
          uVar10 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                   uVar12 << 0x18;
          uVar12 = uVar10 >> (-(char)iVar4 & 0x1fU) | *(uint *)(param_1 + 0x2c);
          uVar10 = uVar10 << ((byte)(iVar4 + -0x1f) & 0x1f);
        }
        *(uint *)(param_1 + 0x2c) = uVar10;
        local_68[uVar7] = (byte)(uVar12 >> 0x1f);
        uVar7 = uVar7 + 1;
      } while (uVar15 != uVar7);
      pbVar5 = *(byte **)(param_4 + 0x28);
      iVar4 = *(int *)(param_2 + 0xbd8);
      iVar6 = (uint)*pbVar5 * -2;
      if ((bVar2 & 0x11) == 0) {
        lVar11 = uVar15 + 1;
        uVar17 = 0;
        uVar10 = 0;
        uVar12 = 0;
        do {
          if (uVar17 == 0) {
            uVar12 = *puVar9;
            uVar10 = 0;
          }
          if (local_68[lVar11 + -2] != 0) {
            uVar10 = uVar10 | 1 << (uVar17 & 0x1f);
            iVar16 = 0;
            if ((uVar12 >> (uVar17 & 0x1f) & 1) == 0) {
              iVar16 = iVar4;
            }
            *(int *)((long)pvVar1 +
                    (ulong)((uint)pbVar5[lVar11 + -2] + iVar6 + (uint)pbVar5[lVar11 + -1] >> 1) * 4)
                 = iVar16;
          }
          uVar17 = uVar17 + 1;
          if ((uVar17 == 0x10) || (lVar11 == 2)) {
            *puVar9 = uVar10;
            puVar9 = puVar9 + 1;
            uVar17 = 0;
          }
          lVar11 = lVar11 + -1;
        } while (1 < lVar11);
      }
      else {
        uVar10 = bVar2 - 1;
        uVar12 = *puVar9;
        bVar3 = local_68[uVar10];
        uVar14 = ~uVar12;
        if (bVar3 != 0) {
          *(uint *)((long)pvVar1 +
                   (ulong)((uint)pbVar5[uVar15] + (uint)pbVar5[uVar10] + iVar6 >> 1) * 4) =
               (uVar14 & 1) * iVar4;
        }
        uVar13 = (uint)(bVar3 != 0);
        if (bVar2 < 3) {
          uVar10 = 1;
        }
        else {
          uVar15 = (ulong)(bVar2 - 2);
          uVar8 = 1;
          do {
            if (local_68[uVar15] != 0) {
              uVar13 = uVar13 | 1 << (uVar8 & 0x1f);
              iVar16 = 0;
              if ((uVar14 >> (uVar8 & 0x1f) & 1) != 0) {
                iVar16 = iVar4;
              }
              *(int *)((long)pvVar1 +
                      (ulong)((uint)pbVar5[uVar15] + iVar6 + (uint)pbVar5[uVar15 + 1] >> 1) * 4) =
                   iVar16;
            }
            uVar15 = uVar15 - 1;
            iVar16 = uVar8 - uVar17;
            uVar8 = uVar8 + 1;
          } while (iVar16 != -2);
        }
        if (local_68[0] != 0) {
          uVar13 = uVar13 | 1 << (uVar10 & 0x1f);
          iVar16 = 0;
          if ((uVar12 >> (uVar10 & 0x1f) & 1) == 0) {
            iVar16 = iVar4;
          }
          *(int *)((long)pvVar1 + (ulong)(iVar6 + (uint)*pbVar5 + (uint)pbVar5[1] >> 1) * 4) =
               iVar16;
        }
        *puVar9 = uVar13;
      }
    }
  }
  else {
    *puVar9 = 0;
    if ((bVar2 & 0x11) == 0) {
      puVar18 = (undefined4 *)(param_3 + 0xf4);
      do {
        uVar17 = uVar17 - 0x10;
        *puVar18 = 0;
        puVar18 = puVar18 + 1;
      } while ((uVar17 & 0x110) == 0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

