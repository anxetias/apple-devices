// name: FUN_10010cf44
// address: 10010cf44

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10010cf44(long param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined4 *puVar10;
  long lVar11;
  byte *pbVar12;
  undefined1 uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  
  lVar11 = *(long *)(param_1 + 0xba8);
  uVar16 = *(uint *)(lVar11 + 4);
  **(int **)(param_1 + 0x40) = **(int **)(param_1 + 0x40) + 2;
  iVar2 = *(int *)(param_1 + 0x28);
  uVar15 = iVar2 + 2;
  *(uint *)(param_1 + 0x28) = uVar15;
  if (uVar15 < 0x20) {
    uVar15 = *(uint *)(param_1 + 0x2c);
    *(uint *)(param_1 + 0x2c) = uVar15 * 4;
  }
  else if (uVar15 == 0x20) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    uVar15 = *(int *)(param_1 + 0x18) + 1;
    *(uint *)(param_1 + 0x18) = uVar15;
    uVar9 = 0;
    if (uVar15 < *(uint *)(param_1 + 0x34)) {
      *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
      uVar9 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar15 * 4);
    }
    uVar15 = *(uint *)(param_1 + 0x2c);
    *(uint *)(param_1 + 0x2c) =
         uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
  }
  else {
    *(int *)(param_1 + 0x28) = iVar2 + -0x1e;
    lVar4 = *(long *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar4 + 4;
    uVar15 = *(uint *)(lVar4 + 4);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    uVar9 = uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 | uVar15 << 0x18;
    uVar15 = uVar9 >> (-(char)iVar2 & 0x1fU) | *(uint *)(param_1 + 0x2c);
    *(uint *)(param_1 + 0x2c) = uVar9 << ((byte)(iVar2 + -0x1e) & 0x1f);
  }
  uVar8 = _UNK_100700c68;
  uVar7 = _DAT_100700c60;
  puVar5 = *(undefined8 **)(lVar11 + 8);
  pbVar6 = (byte *)*puVar5;
  if (pbVar6 != (byte *)0x0) {
    lVar11 = (ulong)uVar16 * 0x79 + param_1;
    pbVar12 = (byte *)(lVar11 + 0x5f9);
    if (uVar15 < 0x40000000) {
      *(undefined8 *)(lVar11 + 0x662) = 0;
      *(undefined8 *)(lVar11 + 0x66a) = 0;
      *(undefined8 *)(lVar11 + 0x659) = 0;
      *(undefined8 *)(lVar11 + 0x661) = 0;
      *(undefined8 *)(lVar11 + 0x649) = 0;
      *(undefined8 *)(lVar11 + 0x651) = 0;
      *(undefined8 *)(lVar11 + 0x639) = 0;
      *(undefined8 *)(lVar11 + 0x641) = 0;
      *(undefined8 *)(lVar11 + 0x629) = 0;
      *(undefined8 *)(lVar11 + 0x631) = 0;
      *(undefined8 *)(lVar11 + 0x619) = 0;
      *(undefined8 *)(lVar11 + 0x621) = 0;
      *(undefined8 *)(lVar11 + 0x609) = 0;
      *(undefined8 *)(lVar11 + 0x611) = 0;
      pbVar12[0] = 0;
      pbVar12[1] = 0;
      pbVar12[2] = 0;
      pbVar12[3] = 0;
      pbVar12[4] = 0;
      pbVar12[5] = 0;
      pbVar12[6] = 0;
      pbVar12[7] = 0;
      *(undefined8 *)(lVar11 + 0x601) = 0;
      uVar13 = 0;
    }
    else if (SBORROW4(0,uVar15 & 0xc0000000)) {
      *(undefined8 *)(lVar11 + 0x662) = _DAT_100700c60;
      *(undefined8 *)(lVar11 + 0x66a) = uVar8;
      *(undefined8 *)(lVar11 + 0x659) = uVar7;
      *(undefined8 *)(lVar11 + 0x661) = uVar8;
      *(undefined8 *)(lVar11 + 0x649) = uVar7;
      *(undefined8 *)(lVar11 + 0x651) = uVar8;
      *(undefined8 *)(lVar11 + 0x639) = uVar7;
      *(undefined8 *)(lVar11 + 0x641) = uVar8;
      *(undefined8 *)(lVar11 + 0x629) = uVar7;
      *(undefined8 *)(lVar11 + 0x631) = uVar8;
      *(undefined8 *)(lVar11 + 0x619) = uVar7;
      *(undefined8 *)(lVar11 + 0x621) = uVar8;
      *(undefined8 *)(lVar11 + 0x609) = uVar7;
      *(undefined8 *)(lVar11 + 0x611) = uVar8;
      *(undefined8 *)pbVar12 = uVar7;
      *(undefined8 *)(lVar11 + 0x601) = uVar8;
      uVar13 = 2;
    }
    else {
      iVar2 = *(int *)(puVar5 + 4);
      uVar13 = 1;
      if (iVar2 != 0) {
        bVar1 = *pbVar6;
        iVar14 = 0;
        do {
          uVar15 = (uint)bVar1;
          if (bVar1 != 0) {
            do {
              **(int **)(param_1 + 0x40) = **(int **)(param_1 + 0x40) + 1;
              iVar3 = *(int *)(param_1 + 0x28);
              uVar16 = iVar3 + 1;
              *(uint *)(param_1 + 0x28) = uVar16;
              if (uVar16 < 0x20) {
                uVar16 = *(uint *)(param_1 + 0x2c);
                uVar9 = uVar16 * 2;
              }
              else if (uVar16 == 0x20) {
                *(undefined4 *)(param_1 + 0x28) = 0;
                uVar9 = *(int *)(param_1 + 0x18) + 1;
                *(uint *)(param_1 + 0x18) = uVar9;
                uVar16 = 0;
                if (uVar9 < *(uint *)(param_1 + 0x34)) {
                  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
                  uVar16 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar9 * 4);
                }
                uVar9 = uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 |
                        uVar16 << 0x18;
                uVar16 = *(uint *)(param_1 + 0x2c);
              }
              else {
                *(int *)(param_1 + 0x28) = iVar3 + -0x1f;
                lVar11 = *(long *)(param_1 + 0x10);
                *(long *)(param_1 + 0x10) = lVar11 + 4;
                uVar16 = *(uint *)(lVar11 + 4);
                *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
                uVar9 = uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 |
                        uVar16 << 0x18;
                uVar16 = uVar9 >> (-(char)iVar3 & 0x1fU) | *(uint *)(param_1 + 0x2c);
                uVar9 = uVar9 << ((byte)(iVar3 + -0x1f) & 0x1f);
              }
              *(uint *)(param_1 + 0x2c) = uVar9;
              *pbVar12 = (byte)(uVar16 >> 0x1f);
              pbVar12 = pbVar12 + 1;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
          iVar14 = iVar14 + 1;
        } while (iVar14 != iVar2);
      }
    }
    return uVar13;
  }
  puVar10 = (undefined4 *)___cxa_allocate_exception(4);
  *puVar10 = 0xfffffffa;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(puVar10,&PTR_DAT_100835930,0);
}

