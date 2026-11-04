// name: FUN_10026b3e0
// address: 10026b3e0

undefined1  [16] FUN_10026b3e0(short *param_1,undefined1 *param_2,ulong param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  short sVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  int iVar15;
  char cVar16;
  bool bVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  if (*param_1 == 0x7ff) {
    bVar1 = *(byte *)(param_1 + 1);
    param_3 = (ulong)bVar1;
    if (((param_3 != 1) && (bVar2 = *(byte *)((long)param_1 + 3), (ulong)bVar2 != 0)) &&
       (uVar14 = (ulong)*(byte *)((long)param_1 + 5), uVar14 != 0xf)) {
      bVar3 = *(byte *)(param_1 + 3);
      if ((ulong)bVar3 != 3) {
        bVar4 = *(byte *)((long)param_1 + 0xd);
        uVar11 = 0xffffffce;
        *param_2 = bVar4 < 2;
        if (bVar4 >= 2) goto LAB_10026b419;
        uVar9 = *(uint *)(&DAT_10071c740 + param_3 * 4);
        param_2[1] = (char)uVar9;
        uVar13 = *(uint *)(&DAT_10071c750 + (ulong)bVar2 * 4) & 0xff;
        cVar16 = (char)*(uint *)(&DAT_10071c750 + (ulong)bVar2 * 4);
        param_2[2] = cVar16;
        param_2[3] = param_3 != 3;
        cVar5 = *(char *)((long)param_1 + 9);
        param_2[4] = cVar5 != '\x03';
        param_2[5] = (cVar5 != '\x03') + '\x01';
        param_2[6] = cVar5;
        sVar8 = param_1[2];
        param_2[7] = (char)sVar8 == '\0';
        param_2[8] = bVar4 == 1;
        uVar9 = *(uint *)(&DAT_10071c760 + (ulong)bVar3 * 4 + (ulong)((uVar9 & 0xff) << 4));
        *(uint *)(param_2 + 0xc) = uVar9;
        iVar6 = *(int *)(&DAT_10071c790 +
                        uVar14 * 4 + (ulong)(uVar13 << 6) + (ulong)((uint)(param_3 != 3) * 0xc0));
        *(int *)(param_2 + 0x10) = iVar6;
        if (cVar16 == '\0') {
          iVar10 = 0x20;
          if (cVar5 == '\x01') {
            iVar10 = (uint)*(byte *)(param_1 + 5) * 4 + 4;
          }
          *(int *)(param_2 + 0x1c) = iVar10;
          param_3 = (ulong)(uint)(iVar6 * 12000) % (ulong)uVar9;
          uVar9 = ((uint)*(byte *)((long)param_1 + 7) + (uint)(iVar6 * 12000) / uVar9) * 4 - 4;
          *(uint *)(param_2 + 0x14) = uVar9;
          *(undefined4 *)(param_2 + 0x18) = 0xc;
          *(undefined4 *)(param_2 + 0x20) = 0x180;
LAB_10026b66a:
          *(undefined4 *)(param_2 + 0x38) = 0x20;
        }
        else {
          if (uVar13 == 1) {
            if (bVar1 == 3) {
              cVar16 = (&DAT_10071c910 + (ulong)(cVar5 != '\x03') * 0x10 + (ulong)bVar3 * 0x20)
                       [uVar14];
              param_3 = CONCAT71((int7)((ulong)(&DAT_10071c910 +
                                               (ulong)(cVar5 != '\x03') * 0x10 + (ulong)bVar3 * 0x20
                                               ) >> 8),cVar16);
              param_2[0x24] = cVar16;
              if (cVar16 == -1) goto LAB_10026b6a0;
            }
            else {
              param_2[0x24] = 4;
              param_3 = 4;
            }
            lVar12 = (long)(char)param_3;
            uVar13 = (uint)(byte)(&DAT_10071c990)[lVar12];
            param_2[0x25] = (&DAT_10071c990)[lVar12];
            *(undefined **)(param_2 + 0x28) = &DAT_10071c998 + *(int *)(&DAT_10071c998 + lVar12 * 4)
            ;
            *(undefined **)(param_2 + 0x30) = &DAT_10071c9ac + *(int *)(&DAT_10071c9ac + lVar12 * 4)
            ;
            if (cVar5 == '\x01') {
              uVar13 = (uint)*(byte *)(param_1 + 5) * 4 + 4;
            }
            *(uint *)(param_2 + 0x1c) = uVar13;
            param_3 = (ulong)(uint)(iVar6 * 0x23280) % (ulong)uVar9;
            uVar9 = ((uint)(iVar6 * 0x23280) / uVar9 + (uint)*(byte *)((long)param_1 + 7)) - 4;
            *(uint *)(param_2 + 0x14) = uVar9;
            *(undefined4 *)(param_2 + 0x18) = 0x24;
            *(undefined4 *)(param_2 + 0x20) = 0x480;
            goto LAB_10026b66a;
          }
          if (uVar13 == 2) {
            bVar17 = cVar5 != '\x03';
            iVar10 = 0x11;
            if (bVar17) {
              iVar10 = 0x20;
            }
            iVar15 = 0x13;
            if (bVar17) {
              iVar15 = 0x22;
            }
            iVar7 = (uint)bVar17 * 8 + 9;
            if (bVar1 == 3) {
              iVar7 = iVar10;
            }
            iVar10 = (uint)bVar17 * 8 + 0xb;
            if (bVar1 == 3) {
              iVar10 = iVar15;
            }
            if ((char)sVar8 != '\0') {
              iVar10 = iVar7;
            }
            uVar13 = iVar6 * 0x23280;
            *(int *)(param_2 + 0x38) = iVar10;
            if (bVar1 == 3) {
              param_3 = (ulong)uVar13 % (ulong)uVar9;
              uVar9 = (uVar13 / uVar9 + (uint)*(byte *)((long)param_1 + 7)) - 4;
              *(uint *)(param_2 + 0x14) = uVar9;
              *(undefined4 *)(param_2 + 0x18) = 0x24;
              *(undefined4 *)(param_2 + 0x20) = 0x480;
            }
            else {
              param_3 = (ulong)uVar13 % (ulong)(uVar9 * 2);
              uVar9 = (uVar13 / (uVar9 * 2) + (uint)*(byte *)((long)param_1 + 7)) - 4;
              *(uint *)(param_2 + 0x14) = uVar9;
              *(undefined4 *)(param_2 + 0x18) = 0x12;
              *(undefined4 *)(param_2 + 0x20) = 0x240;
            }
          }
          else {
            uVar9 = *(uint *)(param_2 + 0x14);
          }
        }
        uVar11 = 0xffffffce;
        if (uVar9 < 0x701) {
          uVar11 = 0;
        }
LAB_10026b6a0:
        auVar19._8_8_ = param_3;
        auVar19._0_8_ = uVar11;
        return auVar19;
      }
    }
  }
  *param_2 = 0;
LAB_10026b419:
  auVar18._8_8_ = param_3;
  auVar18._0_8_ = 0xffffffce;
  return auVar18;
}

