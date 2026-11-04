// name: FUN_100109df4
// address: 100109df4

undefined8 FUN_100109df4(long param_1,char *param_2)

{
  char *pcVar1;
  undefined8 *puVar2;
  byte bVar3;
  sbyte sVar4;
  char cVar5;
  long *plVar6;
  int *piVar7;
  uint uVar8;
  ulong uVar9;
  byte bVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  puVar2 = *(undefined8 **)(param_1 + 0x1e30);
  *puVar2 = param_2;
  if (*param_2 == '\0') {
    param_2[0x20] = '\0';
  }
  else {
    iVar11 = *(int *)(param_2 + 0x10);
    if (param_2[0x20] != '\0') {
      lVar16 = 0x358;
      uVar9 = 0;
      do {
        pcVar1 = param_2 + lVar16 + -0x3b8;
        if (lVar16 == 0x358) {
          pcVar1 = (char *)((long)puVar2 + 0x14);
        }
        cVar5 = ((long)*(int *)(param_2 + 0x14) == 0) + '\x01';
        FUN_10010a5ac(cVar5,*(undefined4 *)(param_2 + 4),param_2 + lVar16 + -0x330,pcVar1,
                      param_2[uVar9 + 0x688],
                      *(undefined4 *)
                       (*(long *)(param_2 + 0x698) + (long)*(int *)(param_2 + 0x14) * 4),cVar5,
                      (uint)(iVar11 == 0) << 3 | 0xfffffff1,(iVar11 != 0) * '\b' + '\a');
        FUN_10010a5ac();
        uVar9 = uVar9 + 1;
        puVar2 = *(undefined8 **)(param_1 + 0x1e30);
        param_2 = (char *)*puVar2;
        uVar13 = (ulong)(byte)param_2[0x20];
        lVar16 = lVar16 + 0x88;
      } while (uVar9 < uVar13);
      if (param_2[0x20] != 0) goto LAB_10010a00a;
    }
  }
  param_2[0x20] = '\x01';
  if (*(int *)(param_2 + 4) == 0) {
    *(undefined1 (*) [16])(param_2 + 0x98) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_2 + 0x88) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_2 + 0x78) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_2 + 0x68) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_2 + 0x58) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_2 + 0x48) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_2 + 0x38) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_2 + 0x28) = (undefined1  [16])0x0;
    param_2[0xa8] = '\0';
    param_2[0xa9] = '\0';
    param_2[0xaa] = '\0';
    param_2[0xab] = '\0';
    param_2[0xac] = '\0';
    param_2[0xad] = '\0';
    param_2[0xae] = '\0';
    param_2[0xaf] = '\0';
  }
  else {
    lVar16 = 0;
    do {
      *(undefined4 *)(param_2 + lVar16 * 4 + 0x28) =
           *(undefined4 *)((long)puVar2 + lVar16 * 4 + 0x14);
      lVar16 = lVar16 + 1;
    } while (lVar16 != 0x22);
  }
  if (*(int *)(param_2 + 8) == 0) {
    *(undefined1 (*) [16])(param_2 + 0x3c8) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_2 + 0x3b8) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_2 + 0x3a8) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_2 + 0x398) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_2 + 0x388) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_2 + 0x378) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_2 + 0x368) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_2 + 0x358) = (undefined1  [16])0x0;
    param_2[0x3d8] = '\0';
    param_2[0x3d9] = '\0';
    param_2[0x3da] = '\0';
    param_2[0x3db] = '\0';
    param_2[0x3dc] = '\0';
    param_2[0x3dd] = '\0';
    param_2[0x3de] = '\0';
    param_2[0x3df] = '\0';
  }
  else {
    lVar16 = 0xd6;
    do {
      *(undefined4 *)(param_2 + lVar16 * 4) = *(undefined4 *)((long)puVar2 + lVar16 * 4 + -700);
      lVar16 = lVar16 + 1;
    } while (lVar16 != 0xf8);
  }
  uVar13 = 1;
LAB_10010a00a:
  lVar16 = 0;
  do {
    *(undefined4 *)((long)puVar2 + lVar16 * 4 + 0x14) =
         *(undefined4 *)
          (param_2 + lVar16 * 4 + (ulong)(uint)((int)uVar13 << 7) + uVar13 * 8 + -0x60);
    lVar16 = lVar16 + 1;
  } while (lVar16 != 0x22);
  lVar16 = 0;
  do {
    *(undefined4 *)((long)puVar2 + lVar16 * 4 + 0x9c) =
         *(undefined4 *)
          (param_2 + lVar16 * 4 + (ulong)(uint)((int)uVar13 << 7) + uVar13 * 8 + 0x2d0);
    lVar16 = lVar16 + 1;
  } while (lVar16 != 0x22);
  *param_2 = '\0';
  if (*(int *)(param_2 + 0x1c) == 0) {
    sVar4 = 2;
    if (uVar13 != 4) {
      sVar4 = uVar13 == 2;
    }
    param_2[0x21] = '\0';
    plVar6 = *(long **)(param_1 + 0x1e30);
    lVar16 = *plVar6;
    uVar9 = (ulong)*(byte *)(lVar16 + 0x20);
    if (1 < *(byte *)(lVar16 + 0x20)) {
      lVar14 = 0x22;
      do {
        *(char *)(lVar16 + lVar14) =
             (char)(((int)lVar14 + -0x21) * (uint)*(byte *)(plVar6 + 1) >> sVar4);
        plVar6 = *(long **)(param_1 + 0x1e30);
        lVar16 = *plVar6;
        uVar9 = (ulong)*(byte *)(lVar16 + 0x20);
        uVar13 = lVar14 - 0x20;
        lVar14 = lVar14 + 1;
      } while (uVar13 < uVar9);
    }
    *(char *)(lVar16 + 0x21 + uVar9) = (char)plVar6[1];
    lVar16 = **(long **)(param_1 + 0x1e30);
    bVar10 = *(byte *)(lVar16 + 0x20);
    uVar8 = (uint)bVar10;
  }
  else {
    param_2[0x21] = '\0';
    plVar6 = *(long **)(param_1 + 0x1e30);
    lVar16 = *plVar6;
    uVar9 = (ulong)*(byte *)(lVar16 + 0x20);
    bVar10 = *(byte *)(plVar6 + 1);
    if (*(byte *)(lVar16 + 0x21 + uVar9) < bVar10) {
      bVar3 = *(byte *)(lVar16 + 0x20) + 1;
      *(byte *)(lVar16 + 0x20) = bVar3;
      *(byte *)(lVar16 + 0x21 + (ulong)bVar3) = bVar10;
      plVar6 = *(long **)(param_1 + 0x1e30);
      lVar16 = *plVar6;
      bVar10 = *(byte *)(lVar16 + 0x20);
      uVar9 = (ulong)bVar10;
      lVar14 = (ulong)bVar10 * 0x80 + uVar9 * 8 + lVar16;
      lVar15 = -0x18;
      do {
        *(undefined4 *)(lVar14 + lVar15 * 4) = *(undefined4 *)(lVar14 + -0x88 + lVar15 * 4);
        lVar15 = lVar15 + 1;
      } while (lVar15 != 10);
      lVar14 = (ulong)bVar10 * 0x80 + uVar9 * 8 + lVar16;
      lVar15 = -0x22;
      do {
        *(undefined4 *)(lVar14 + 0x358 + lVar15 * 4) = *(undefined4 *)(lVar14 + 0x2d0 + lVar15 * 4);
        lVar15 = lVar15 + 1;
      } while (lVar15 != 0);
    }
    uVar8 = (uint)uVar9;
    bVar10 = (byte)uVar9;
    if (1 < bVar10) {
      lVar14 = 0x22;
      do {
        if ((int)((int)lVar14 + ((uint)*(byte *)(plVar6 + 1) - (int)uVar9) + -0x21) <
            (int)(uint)*(byte *)(lVar16 + lVar14)) {
          cVar5 = (*(byte *)(plVar6 + 1) - (char)uVar9) + (char)lVar14 + -0x21;
LAB_10010a1c2:
          *(char *)(lVar16 + lVar14) = cVar5;
        }
        else {
          bVar10 = *(byte *)(lVar16 + -1 + lVar14);
          if (*(byte *)(lVar16 + lVar14) <= bVar10) {
            cVar5 = bVar10 + 1;
            goto LAB_10010a1c2;
          }
        }
        plVar6 = *(long **)(param_1 + 0x1e30);
        lVar16 = *plVar6;
        bVar10 = *(byte *)(lVar16 + 0x20);
        uVar9 = (ulong)bVar10;
        uVar8 = (uint)bVar10;
        uVar13 = lVar14 - 0x20;
        lVar14 = lVar14 + 1;
      } while (uVar13 < uVar9);
    }
  }
  if (bVar10 != 0) {
    piVar7 = (int *)(lVar16 + 0x28);
    uVar9 = (ulong)uVar8;
    do {
      if (*(int *)(lVar16 + 0x14) == 2) {
        *piVar7 = (piVar7[1] + *piVar7 * 2) / 3;
        piVar7[1] = (piVar7[1] + piVar7[2] * 2) / 3;
        piVar7[2] = (piVar7[4] + piVar7[3] * 2) / 3;
        piVar7[3] = (piVar7[4] + piVar7[5] * 2) / 3;
        *(ulong *)(piVar7 + 4) = CONCAT44((piVar7[8] + piVar7[9]) / 2,(piVar7[6] + piVar7[7]) / 2);
        *(undefined8 *)(piVar7 + 6) = *(undefined8 *)(piVar7 + 10);
        *(ulong *)(piVar7 + 8) =
             CONCAT44((piVar7[0xe] + piVar7[0xf]) / 2,(piVar7[0xc] + piVar7[0xd]) / 2);
        *(undefined8 *)(piVar7 + 10) = *(undefined8 *)(piVar7 + 0x10);
        *(undefined8 *)(piVar7 + 0xc) = *(undefined8 *)(piVar7 + 0x12);
        piVar7[0xe] = (piVar7[0x14] + piVar7[0x15]) / 2;
        piVar7[0xf] = (piVar7[0x16] + piVar7[0x17]) / 2;
        piVar7[0x10] = (piVar7[0x18] + piVar7[0x19]) / 2;
        piVar7[0x11] = (piVar7[0x1a] + piVar7[0x1b]) / 2;
        iVar11 = piVar7[0x1d] + piVar7[0x1c] + piVar7[0x1e];
        iVar12 = iVar11 + piVar7[0x1f];
        iVar11 = piVar7[0x1f] + iVar11 + 3;
        if (-1 < iVar12) {
          iVar11 = iVar12;
        }
        piVar7[0x12] = iVar11 >> 2;
        piVar7[0x13] = (piVar7[0x21] + piVar7[0x20]) / 2;
      }
      if (*(int *)(lVar16 + 0x18) == 2) {
        piVar7[0xcc] = (piVar7[0xcd] + piVar7[0xcc] * 2) / 3;
        piVar7[0xcd] = (piVar7[0xcd] + piVar7[0xce] * 2) / 3;
        piVar7[0xce] = (piVar7[0xd0] + piVar7[0xcf] * 2) / 3;
        piVar7[0xcf] = (piVar7[0xd0] + piVar7[0xd1] * 2) / 3;
        *(ulong *)(piVar7 + 0xd0) =
             CONCAT44((piVar7[0xd4] + piVar7[0xd5]) / 2,(piVar7[0xd2] + piVar7[0xd3]) / 2);
        *(undefined8 *)(piVar7 + 0xd2) = *(undefined8 *)(piVar7 + 0xd6);
        *(ulong *)(piVar7 + 0xd4) =
             CONCAT44((piVar7[0xda] + piVar7[0xdb]) / 2,(piVar7[0xd8] + piVar7[0xd9]) / 2);
        *(undefined8 *)(piVar7 + 0xd6) = *(undefined8 *)(piVar7 + 0xdc);
        *(undefined8 *)(piVar7 + 0xd8) = *(undefined8 *)(piVar7 + 0xde);
        piVar7[0xda] = (piVar7[0xe0] + piVar7[0xe1]) / 2;
        piVar7[0xdb] = (piVar7[0xe2] + piVar7[0xe3]) / 2;
        piVar7[0xdc] = (piVar7[0xe4] + piVar7[0xe5]) / 2;
        piVar7[0xdd] = (piVar7[0xe6] + piVar7[0xe7]) / 2;
        iVar11 = piVar7[0xe9] + piVar7[0xe8] + piVar7[0xea];
        iVar12 = iVar11 + piVar7[0xeb];
        iVar11 = piVar7[0xeb] + iVar11 + 3;
        if (-1 < iVar12) {
          iVar11 = iVar12;
        }
        piVar7[0xde] = iVar11 >> 2;
        piVar7[0xdf] = (piVar7[0xed] + piVar7[0xec]) / 2;
      }
      piVar7 = piVar7 + 0x22;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  return 0;
}

