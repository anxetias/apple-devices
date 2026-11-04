// name: FUN_1001a0dd3
// address: 1001a0dd3

void FUN_1001a0dd3(long *param_1,long param_2,uint param_3,int param_4,int param_5,char param_6)

{
  long lVar1;
  short sVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  short *psVar6;
  ulong uVar7;
  undefined8 uVar8;
  ushort uVar9;
  undefined2 uVar10;
  uint uVar11;
  long lVar12;
  short sVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  char cVar18;
  ushort *puVar19;
  undefined2 *puVar20;
  int iVar21;
  bool bVar22;
  undefined8 *local_50;
  long local_48;
  
  cVar3 = *(char *)(*param_1 + 0xd4);
  FUN_1001e9de0(&DAT_10089cae8);
  if (DAT_10089cae0 == '\0') {
    FUN_1001c631b(&DAT_10070f3e0,&DAT_10089aae0,0x1000);
    FUN_1001c631b(&DAT_10070f3e0,&DAT_10089bae0,0x1000);
    lVar12 = 0;
    lVar14 = 0;
    do {
      lVar17 = 0;
      do {
        lVar1 = lVar12 + lVar17;
        (&DAT_10089aae0)[lVar1] =
             (char)(((byte)((char)(&DAT_10089aae0)[lVar1] >> 7) >> 6) + (&DAT_10089aae0)[lVar1]) >>
             2;
        cVar18 = '\x04';
        if (param_4 < 0x4c353535) {
          if (param_4 != 0x10) {
            if (param_4 != 0x42353635) goto LAB_1001a0ebc;
LAB_1001a0eab:
            cVar18 = '\b';
          }
LAB_1001a0eae:
          (&DAT_10089bae0)[lVar1] = (char)(&DAT_10089bae0)[lVar1] / cVar18;
        }
        else {
          if (param_4 == 0x4c353535) goto LAB_1001a0eae;
          if (param_4 == 0x4c353635) goto LAB_1001a0eab;
        }
LAB_1001a0ebc:
        lVar17 = lVar17 + 1;
      } while (lVar17 != 0x40);
      lVar14 = lVar14 + 1;
      lVar12 = lVar12 + 0x40;
    } while (lVar14 != 0x40);
    DAT_10089cae0 = '\x01';
  }
  local_50 = DAT_10089cb30;
  iVar21 = 0;
  if (param_6 == '\0') {
    iVar21 = param_5;
  }
  for (; local_50 != (undefined8 *)0x0; local_50 = (undefined8 *)*local_50) {
    if (((*(int *)(local_50 + 2) == param_4) && (*(int *)((long)local_50 + 0x14) == iVar21)) &&
       (*(char *)(local_50 + 3) == param_6)) goto LAB_1001a131e;
  }
  local_50 = (undefined8 *)FUN_1001c63e1(0x940);
  if (local_50 == (undefined8 *)0x0) {
    uVar8 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar8,0x10);
    if (cVar3 != '\0') {
      FUN_10069c1bf(uVar8);
    }
    FUN_1001782e9(0,0);
    FUN_1001e9eb9(&DAT_10089cae8);
    uVar8 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar8,0x10);
    if (cVar3 != '\0') {
      FUN_10069c235(uVar8);
    }
    FUN_1001782e9(0,0);
  }
  else {
    *(int *)(local_50 + 2) = param_4;
    *(int *)((long)local_50 + 0x14) = iVar21;
    *(char *)(local_50 + 3) = param_6;
    FUN_1001c2bbb(&DAT_10089cb30,local_50);
    uVar4 = 0x10000;
    if (param_6 == '\0') {
      uVar4 = FUN_1001a2544(param_5);
    }
    *(undefined8 *)((long)local_50 + 0x3a) = 0;
    *(undefined8 *)((long)local_50 + 0x42) = 0;
    *(undefined8 *)((long)local_50 + 0x2a) = 0;
    *(undefined8 *)((long)local_50 + 0x32) = 0;
    *(undefined8 *)((long)local_50 + 0x1a) = 0;
    *(undefined8 *)((long)local_50 + 0x22) = 0;
    puVar19 = (ushort *)((long)local_50 + 0x4a);
    iVar21 = 0;
    uVar15 = 0;
    do {
      uVar5 = FUN_1001b2b52(iVar21,uVar4);
      uVar11 = uVar5 >> 8 & 0xff;
      if (0xffff < (int)uVar5) {
        uVar11 = 0xff;
      }
      if (uVar15 < 7) {
        uVar11 = 0;
      }
      if (0xf8 < uVar15) {
        uVar11 = 0xff;
      }
      if (param_4 < 0x4c353535) {
        if (param_4 == 0x10) {
          uVar9 = (ushort)(uVar11 >> 1) & 0xfffc;
          goto LAB_1001a0ffd;
        }
        if (param_4 == 0x42353635) {
          uVar9 = (ushort)uVar11 & 0xfff8;
          goto LAB_1001a0ffd;
        }
      }
      else {
        if (param_4 == 0x4c353535) {
          uVar9 = (ushort)((uVar11 & 0xf8) << 7);
        }
        else {
          if (param_4 != 0x4c353635) goto LAB_1001a1005;
          uVar9 = (ushort)((uVar11 & 0xf8) << 8);
        }
LAB_1001a0ffd:
        *puVar19 = uVar9;
        puVar19 = puVar19 + 1;
      }
LAB_1001a1005:
      uVar15 = uVar15 + 1;
      iVar21 = iVar21 + 0x101;
    } while (uVar15 != 0x100);
    iVar21 = 0x18;
    do {
      if (param_4 < 0x4c353535) {
        if (param_4 == 0x10) {
          uVar9 = 0x7c;
          goto LAB_1001a105f;
        }
        if (param_4 == 0x42353635) {
          uVar9 = 0xf8;
          goto LAB_1001a105f;
        }
      }
      else {
        if (param_4 == 0x4c353535) {
          uVar9 = 0x7c00;
        }
        else {
          if (param_4 != 0x4c353635) goto LAB_1001a1067;
          uVar9 = 0xf800;
        }
LAB_1001a105f:
        *puVar19 = uVar9;
        puVar19 = puVar19 + 1;
      }
LAB_1001a1067:
      iVar21 = iVar21 + -1;
    } while (iVar21 != 0);
    *(undefined8 *)((long)local_50 + 0x29a) = 0;
    *(undefined8 *)((long)local_50 + 0x2a2) = 0;
    *(undefined8 *)((long)local_50 + 0x28a) = 0;
    *(undefined8 *)((long)local_50 + 0x292) = 0;
    *(undefined8 *)((long)local_50 + 0x27a) = 0;
    *(undefined8 *)((long)local_50 + 0x282) = 0;
    puVar19 = (ushort *)((long)local_50 + 0x2aa);
    iVar21 = 0;
    uVar15 = 0;
    do {
      uVar5 = FUN_1001b2b52(iVar21,uVar4);
      uVar11 = uVar5 >> 8 & 0xff;
      if (0xffff < (int)uVar5) {
        uVar11 = 0xff;
      }
      if (param_4 < 0x4c353535) {
        if (param_4 == 0x10) {
LAB_1001a10df:
          if (uVar15 < 7) {
            uVar11 = 0;
          }
          bVar22 = uVar15 < 0xf9;
          goto LAB_1001a1109;
        }
        if (param_4 == 0x42353635) goto LAB_1001a10f5;
      }
      else {
        if (param_4 != 0x4c353635) {
          if (param_4 != 0x4c353535) goto LAB_1001a1112;
          goto LAB_1001a10df;
        }
LAB_1001a10f5:
        if (uVar15 < 3) {
          uVar11 = 0;
        }
        bVar22 = uVar15 < 0xfd;
LAB_1001a1109:
        if (!bVar22) {
          uVar11 = 0xff;
        }
      }
LAB_1001a1112:
      if (param_4 < 0x4c353535) {
        if (param_4 == 0x10) {
          uVar9 = (ushort)(uVar11 << 2);
LAB_1001a1149:
          uVar9 = (uVar9 & 0xffe0) << 8 | uVar9 >> 8;
          goto LAB_1001a1158;
        }
        if (param_4 == 0x42353635) {
          uVar9 = (ushort)(uVar11 << 3);
          goto LAB_1001a1149;
        }
      }
      else {
        if (param_4 == 0x4c353535) {
          uVar9 = (ushort)(uVar11 << 2);
        }
        else {
          if (param_4 != 0x4c353635) goto LAB_1001a115f;
          uVar9 = (ushort)(uVar11 << 3);
        }
        uVar9 = uVar9 & 0xffe0;
LAB_1001a1158:
        *puVar19 = uVar9;
        puVar19 = puVar19 + 1;
      }
LAB_1001a115f:
      uVar15 = uVar15 + 1;
      iVar21 = iVar21 + 0x101;
    } while (uVar15 != 0x100);
    iVar21 = 0x18;
    do {
      if (param_4 < 0x4c353535) {
        if (param_4 == 0x10) {
          uVar9 = 0xe003;
          goto LAB_1001a11bf;
        }
        if (param_4 == 0x42353635) {
          uVar9 = 0xe007;
          goto LAB_1001a11bf;
        }
      }
      else {
        if (param_4 == 0x4c353535) {
          uVar9 = 0x3e0;
        }
        else {
          if (param_4 != 0x4c353635) goto LAB_1001a11c6;
          uVar9 = 0x7e0;
        }
LAB_1001a11bf:
        *puVar19 = uVar9;
        puVar19 = puVar19 + 1;
      }
LAB_1001a11c6:
      iVar21 = iVar21 + -1;
    } while (iVar21 != 0);
    *(undefined8 *)((long)local_50 + 0x4fa) = 0;
    *(undefined8 *)((long)local_50 + 0x502) = 0;
    *(undefined8 *)((long)local_50 + 0x4ea) = 0;
    *(undefined8 *)((long)local_50 + 0x4f2) = 0;
    *(undefined8 *)((long)local_50 + 0x4da) = 0;
    *(undefined8 *)((long)local_50 + 0x4e2) = 0;
    puVar20 = (undefined2 *)((long)local_50 + 0x50a);
    iVar21 = 0;
    uVar15 = 0;
    do {
      uVar5 = FUN_1001b2b52(iVar21,uVar4);
      uVar11 = uVar5 >> 8 & 0xff;
      if (0xffff < (int)uVar5) {
        uVar11 = 0xff;
      }
      if (uVar15 < 7) {
        uVar11 = 0;
      }
      if (0xf8 < uVar15) {
        uVar11 = 0xff;
      }
      if (param_4 < 0x4c353535) {
        if ((param_4 == 0x10) || (param_4 == 0x42353635)) {
          uVar10 = (undefined2)((uVar11 & 0xf8) << 5);
LAB_1001a1259:
          *puVar20 = uVar10;
          puVar20 = puVar20 + 1;
        }
      }
      else if ((param_4 == 0x4c353535) || (param_4 == 0x4c353635)) {
        uVar10 = (undefined2)(uVar11 >> 3);
        goto LAB_1001a1259;
      }
      uVar15 = uVar15 + 1;
      iVar21 = iVar21 + 0x101;
    } while (uVar15 != 0x100);
    iVar21 = 0x18;
    do {
      if (param_4 < 0x4c353535) {
        uVar10 = 0x1f00;
        if ((param_4 == 0x10) || (param_4 == 0x42353635)) {
LAB_1001a12af:
          *puVar20 = uVar10;
          puVar20 = puVar20 + 1;
        }
      }
      else if ((param_4 == 0x4c353635) || (param_4 == 0x4c353535)) {
        uVar10 = 0x1f;
        goto LAB_1001a12af;
      }
      iVar21 = iVar21 + -1;
    } while (iVar21 != 0);
    psVar6 = (short *)((long)local_50 + 0x73a);
    iVar21 = 0x100;
    do {
      sVar13 = 0;
      if (param_4 < 0x4c353535) {
        if (param_4 == 0x10) {
          sVar13 = (ushort)(iVar21 != 0x100) << 7;
          goto LAB_1001a1313;
        }
        if (param_4 == 0x42353635) goto LAB_1001a1313;
      }
      else {
        if (param_4 == 0x4c353535) {
          sVar13 = (ushort)(iVar21 != 0x100) << 0xf;
        }
        else if (param_4 != 0x4c353635) goto LAB_1001a131a;
LAB_1001a1313:
        *psVar6 = sVar13;
        psVar6 = psVar6 + 1;
      }
LAB_1001a131a:
      iVar21 = iVar21 + -1;
    } while (iVar21 != 0);
LAB_1001a131e:
    FUN_1001e9eb9(&DAT_10089cae8);
    lVar12 = *param_1;
    sVar13 = *(short *)(lVar12 + 0xb0);
    if (0 < (long)sVar13) {
      lVar14 = *(long *)(lVar12 + 200);
      uVar15 = *(uint *)(lVar12 + 0xb8);
      sVar2 = *(short *)(lVar12 + 0xa8);
      local_48 = 0;
      do {
        if (0 < (long)sVar2) {
          uVar16 = (ulong)(((uint)local_48 & 0x3f) << 6);
          lVar12 = 0;
          do {
            uVar11 = *(uint *)(lVar14 + lVar12 * 4);
            uVar5 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                    uVar11 << 0x18;
            if (cVar3 != '\0') {
              uVar5 = uVar11;
            }
            uVar7 = (ulong)((uint)lVar12 & 0x3f);
            *(ushort *)(param_2 + lVar12 * 2) =
                 *(ushort *)
                  ((long)local_50 +
                  (long)(int)((uVar5 >> 0x10 & 0xff) + (int)(char)(&DAT_10089aae0)[uVar7 + uVar16])
                  * 2 + 0x4a) | *(ushort *)((long)local_50 + (ulong)(uVar5 >> 0x18) * 2 + 0x73a) |
                 *(ushort *)
                  ((long)local_50 +
                  ((long)(char)(&DAT_10089bae0)[uVar7 + uVar16] + (ulong)(uVar5 >> 8 & 0xff)) * 2 +
                  0x2aa) | *(ushort *)
                            ((long)local_50 +
                            (long)(int)((uVar5 & 0xff) + (int)(char)(&DAT_10089aae0)[uVar7 + uVar16]
                                       ) * 2 + 0x50a);
            lVar12 = lVar12 + 1;
          } while (sVar2 != lVar12);
        }
        local_48 = local_48 + 1;
        lVar14 = lVar14 + (ulong)uVar15;
        param_2 = param_2 + (ulong)param_3;
      } while (local_48 != sVar13);
    }
  }
  return;
}

