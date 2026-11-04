// name: FUN_1001f5f7b
// address: 1001f5f7b

uint FUN_1001f5f7b(long param_1,ulong param_2,ulong param_3)

{
  undefined2 *puVar1;
  undefined8 uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  bool bVar17;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar7 = 0xffffff9a;
  if ((param_1 == 0) || (*(int *)(param_1 + 0x70) == 0)) goto LAB_1001f6584;
  *(undefined4 *)(param_1 + 0x80) = 0;
  if ((*(int *)(param_1 + 0x120) == 8) && (*(int *)(param_1 + 0x124) == 0)) {
    do {
      if (*(int *)(param_1 + 0x98) == 0) {
        FUN_1001f5e4e(param_1);
        *(undefined4 *)(param_1 + 0x98) = 0x10000;
        *(long *)(param_1 + 0x90) = param_1 + 0x128;
      }
      iVar6 = *(int *)(param_1 + 0xa0);
      uVar5 = _deflate((z_streamp)(param_1 + 0x78),4);
      *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + (*(int *)(param_1 + 0xa0) - iVar6);
    } while (uVar5 == 0);
    if (uVar5 == 1) goto LAB_1001f6045;
  }
  else {
LAB_1001f6045:
    if (*(int *)(param_1 + 0xec) == 0) {
      uVar5 = 0;
    }
    else {
      iVar6 = FUN_1001f5e4e(param_1);
      uVar5 = -(uint)(iVar6 == -1);
    }
  }
  if ((*(int *)(param_1 + 0x120) == 8) && (*(int *)(param_1 + 0x124) == 0)) {
    uVar7 = _deflateEnd((z_streamp)(param_1 + 0x78));
    if (uVar5 == 0) {
      uVar5 = uVar7;
    }
    *(undefined4 *)(param_1 + 0xe8) = 0;
  }
  if (*(int *)(param_1 + 0x124) == 0) {
    param_3 = *(ulong *)(param_1 + 0x10130);
    param_2 = *(ulong *)(param_1 + 0x10150);
  }
  uVar16 = (long)*(int *)(param_1 + 0x10178) + *(long *)(param_1 + 0x10148);
  if ((0xfffffffe < param_2 || 0xfffffffe < uVar16) || (0xfffffffe < *(ulong *)(param_1 + 0xf0))) {
    *(undefined2 *)(*(long *)(param_1 + 0xf8) + 4) = 0x2d;
    *(undefined2 *)(*(long *)(param_1 + 0xf8) + 6) = 0x2d;
  }
  lVar13 = *(long *)(param_1 + 0xf8);
  lVar9 = 0;
  uVar10 = param_3;
  do {
    uVar11 = uVar10;
    *(char *)(lVar13 + 0x10 + lVar9) = (char)uVar11;
    lVar9 = lVar9 + 1;
    uVar10 = uVar11 >> 8;
  } while (lVar9 != 4);
  if (0xff < uVar11) {
    *(undefined4 *)(lVar13 + 0x10) = 0xffffffff;
  }
  lVar13 = *(long *)(param_1 + 0xf8);
  if (uVar16 < 0xffffffff) {
    lVar9 = 0;
    uVar10 = uVar16;
    do {
      uVar11 = uVar10;
      *(char *)(lVar13 + 0x14 + lVar9) = (char)uVar11;
      lVar9 = lVar9 + 1;
      uVar10 = uVar11 >> 8;
    } while (lVar9 != 4);
    if (0xff < uVar11) {
      *(undefined4 *)(lVar13 + 0x14) = 0xffffffff;
    }
  }
  else {
    uVar10 = 0xffffffff;
    lVar9 = 0;
    do {
      *(char *)(lVar13 + 0x14 + lVar9) = (char)uVar10;
      uVar10 = uVar10 >> 8;
      lVar9 = lVar9 + 1;
    } while (lVar9 != 4);
  }
  if (*(int *)(param_1 + 0xd0) == 1) {
    *(undefined2 *)(*(long *)(param_1 + 0xf8) + 0x24) = 1;
  }
  lVar13 = *(long *)(param_1 + 0xf8);
  if (param_2 < 0xffffffff) {
    lVar9 = 0;
    uVar10 = param_2;
    do {
      uVar11 = uVar10;
      *(char *)(lVar13 + 0x18 + lVar9) = (char)uVar11;
      lVar9 = lVar9 + 1;
      uVar10 = uVar11 >> 8;
    } while (lVar9 != 4);
    if (0xff < uVar11) {
      *(undefined4 *)(lVar13 + 0x18) = 0xffffffff;
    }
    uVar4 = 0;
  }
  else {
    uVar10 = 0xffffffff;
    lVar9 = 0;
    do {
      *(char *)(lVar13 + 0x18 + lVar9) = (char)uVar10;
      uVar10 = uVar10 >> 8;
      lVar9 = lVar9 + 1;
    } while (lVar9 != 4);
    uVar4 = 8;
  }
  if (0xfffffffe < uVar16) {
    uVar4 = uVar4 + 8;
  }
  uVar3 = uVar4 + 8;
  if (*(ulong *)(param_1 + 0xf0) < 0xffffffff) {
    uVar3 = uVar4;
  }
  if (uVar3 != 0) {
    uVar10 = (ulong)(uVar3 | 4);
    uVar7 = 0xffffff99;
    if (*(ulong *)(param_1 + 0x110) < uVar10) goto LAB_1001f6584;
    lVar13 = *(long *)(param_1 + 0xf8);
    lVar9 = *(long *)(param_1 + 0x108);
    puVar1 = (undefined2 *)(lVar13 + lVar9);
    puVar12 = (undefined8 *)(puVar1 + 2);
    *puVar1 = 1;
    *(char *)(puVar1 + 1) = (char)uVar3;
    *(undefined1 *)((long)puVar1 + 3) = 0;
    if (0xfffffffe < param_2) {
      lVar15 = 0;
      uVar11 = param_2;
      do {
        uVar14 = uVar11;
        *(char *)((long)puVar12 + lVar15) = (char)uVar14;
        lVar15 = lVar15 + 1;
        uVar11 = uVar14 >> 8;
      } while (lVar15 != 8);
      if (0xff < uVar14) {
        *puVar12 = 0xffffffffffffffff;
      }
      puVar12 = (undefined8 *)(lVar13 + lVar9 + 0xc);
    }
    if (0xfffffffe < uVar16) {
      lVar13 = 0;
      uVar11 = uVar16;
      do {
        uVar14 = uVar11;
        *(char *)((long)puVar12 + lVar13) = (char)uVar14;
        lVar13 = lVar13 + 1;
        uVar11 = uVar14 >> 8;
      } while (lVar13 != 8);
      if (0xff < uVar14) {
        *puVar12 = 0xffffffffffffffff;
      }
      puVar12 = puVar12 + 1;
    }
    if (0xfffffffe < *(ulong *)(param_1 + 0xf0)) {
      lVar13 = 0;
      uVar11 = *(ulong *)(param_1 + 0xf0);
      do {
        uVar14 = uVar11;
        *(char *)((long)puVar12 + lVar13) = (char)uVar14;
        lVar13 = lVar13 + 1;
        uVar11 = uVar14 >> 8;
      } while (lVar13 != 8);
      if (0xff < uVar14) {
        *puVar12 = 0xffffffffffffffff;
      }
    }
    *(long *)(param_1 + 0x110) = *(long *)(param_1 + 0x110) - uVar10;
    *(long *)(param_1 + 0x108) = *(long *)(param_1 + 0x108) + uVar10;
    uVar10 = uVar10 + *(long *)(param_1 + 0x100);
    *(ulong *)(param_1 + 0x100) = uVar10;
    lVar13 = *(long *)(param_1 + 0xf8);
    *(short *)(lVar13 + 0x1e) = (short)uVar10;
    if (0xffff < uVar10) {
      *(undefined2 *)(lVar13 + 0x1e) = 0xffff;
    }
  }
  if (uVar5 == 0) {
    uVar5 = FUN_1001f65a8(param_1 + 0x60,*(undefined8 *)(param_1 + 0xf8),
                          *(undefined8 *)(param_1 + 0x108));
    _free(*(void **)(param_1 + 0xf8));
    if (uVar5 == 0) {
      uVar8 = FUN_1001a7046(param_1,*(undefined8 *)(param_1 + 0x58));
      lVar13 = FUN_1001a702e(param_1,*(undefined8 *)(param_1 + 0x58),*(long *)(param_1 + 0xf0) + 0xe
                             ,0);
      if (lVar13 == 0) {
        uVar2 = *(undefined8 *)(param_1 + 0x58);
        lVar13 = 0;
        do {
          uVar10 = param_3;
          *(char *)((long)&local_40 + lVar13) = (char)uVar10;
          lVar13 = lVar13 + 1;
          param_3 = uVar10 >> 8;
        } while (lVar13 != 4);
        if (0xff < uVar10) {
          local_40 = CONCAT44(local_40._4_4_,0xffffffff);
        }
        lVar13 = (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 0x38),uVar2,&local_40,4);
        if (0xfffffffe < param_2) {
          uVar7 = -(uint)(lVar13 != 4);
          goto LAB_1001f63f2;
        }
        uVar5 = 0xffffffff;
        if (lVar13 == 4) {
          uVar2 = *(undefined8 *)(param_1 + 0x58);
          lVar13 = 0;
          do {
            uVar10 = uVar16;
            *(char *)((long)&local_40 + lVar13) = (char)uVar10;
            lVar13 = lVar13 + 1;
            uVar16 = uVar10 >> 8;
          } while (lVar13 != 4);
          if (0xff < uVar10) {
            local_40 = CONCAT44(local_40._4_4_,0xffffffff);
          }
          lVar13 = (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 0x38),uVar2,&local_40,4);
          if (lVar13 != 4) goto LAB_1001f6555;
          uVar2 = *(undefined8 *)(param_1 + 0x58);
          lVar13 = 0;
          do {
            uVar16 = param_2;
            *(char *)((long)&local_40 + lVar13) = (char)uVar16;
            lVar13 = lVar13 + 1;
            param_2 = uVar16 >> 8;
          } while (lVar13 != 4);
          if (0xff < uVar16) {
            local_40 = CONCAT44(local_40._4_4_,0xffffffff);
          }
          lVar13 = (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 0x38),uVar2,&local_40,4);
          bVar17 = lVar13 == 4;
LAB_1001f6549:
          uVar5 = -(uint)!bVar17;
        }
      }
      else {
        uVar7 = 0xffffffff;
        uVar5 = 0xffffffff;
        if (param_2 < 0xffffffff) goto LAB_1001f6555;
LAB_1001f63f2:
        uVar5 = uVar7;
        if (*(long *)(param_1 + 0x10140) != 0) {
          lVar13 = FUN_1001a702e(param_1,*(undefined8 *)(param_1 + 0x58),
                                 *(long *)(param_1 + 0x10140) + 4,0);
          uVar5 = 0xffffffff;
          if ((lVar13 == 0) && (uVar7 == 0)) {
            uVar2 = *(undefined8 *)(param_1 + 0x58);
            lVar13 = 0;
            do {
              uVar10 = param_2;
              *(char *)((long)&local_40 + lVar13) = (char)uVar10;
              lVar13 = lVar13 + 1;
              param_2 = uVar10 >> 8;
            } while (lVar13 != 8);
            if (0xff < uVar10) {
              local_40 = 0xffffffffffffffff;
            }
            lVar13 = (**(code **)(param_1 + 0x10))
                               (*(undefined8 *)(param_1 + 0x38),uVar2,&local_40,8);
            if (lVar13 == 8) {
              uVar2 = *(undefined8 *)(param_1 + 0x58);
              lVar13 = 0;
              do {
                uVar10 = uVar16;
                *(char *)((long)&local_40 + lVar13) = (char)uVar10;
                lVar13 = lVar13 + 1;
                uVar16 = uVar10 >> 8;
              } while (lVar13 != 8);
              if (0xff < uVar10) {
                local_40 = 0xffffffffffffffff;
              }
              lVar13 = (**(code **)(param_1 + 0x10))
                                 (*(undefined8 *)(param_1 + 0x38),uVar2,&local_40,8);
              bVar17 = lVar13 == 8;
              goto LAB_1001f6549;
            }
          }
        }
      }
LAB_1001f6555:
      lVar13 = FUN_1001a702e(param_1,*(undefined8 *)(param_1 + 0x58),uVar8,0);
      uVar5 = -(uint)(lVar13 != 0) | uVar5;
    }
  }
  else {
    _free(*(void **)(param_1 + 0xf8));
  }
  *(long *)(param_1 + 0x10190) = *(long *)(param_1 + 0x10190) + 1;
  *(undefined4 *)(param_1 + 0x70) = 0;
  uVar7 = uVar5;
LAB_1001f6584:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar7;
}

